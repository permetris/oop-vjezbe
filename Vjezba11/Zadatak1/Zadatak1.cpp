#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <exception>

using namespace std;

bool isGreater(int num) {
    return (num > 500);
}
bool isLower(int num) {
    return (num < 300);
}



int main()
{
    ifstream file("numbers.txt");
    file.exceptions(ifstream::badbit);

    istream_iterator<int> num(file);
    istream_iterator<int> eos;

    vector<int> numbers;
    vector<int>::iterator vend;

    
    try {

   
        if (!file.is_open()) {
            throw exception();
        }
 
        copy(num, eos, back_inserter(numbers));
        
    }
    catch (const exception& e) {
        cout << "Error opening file" << endl;
        exit(1);
    }

    copy(num, eos, back_inserter(numbers));

    cout << "There is " << count_if(numbers.begin(), numbers.end(), isGreater) << " numbers greater than 500!" << endl;
    cout << "Lowest number is " << *min_element(numbers.begin(), numbers.end()) << endl;
    cout << "Highest number is " << *max_element(numbers.begin(), numbers.end()) << endl;

    vend = remove_if(numbers.begin(), numbers.end(), isLower);
    numbers.resize(distance(numbers.begin(),vend));
    sort(numbers.begin(), numbers.end(), greater<int>());
    
    for (auto el : numbers) {
        cout << el << " ";
    }


    cout << endl;

    return 0;

}

