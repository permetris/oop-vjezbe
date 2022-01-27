
#include "stringovi.h"

using namespace std;

int main()
{
    string str, subStr;
    vector<string> vStrings;

    cout << "Enter string: ";
    cin >> str;

    cout << "Enter substring: ";
    cin >> subStr;


    cout << "Number of time that substring occured is: " << substringCount(str, subStr)<<endl<<endl;


    cout << "Enter strings. Exit input with Ctrl+Z" << endl;
    stringVector(vStrings);
    printVector(vStrings);
}

