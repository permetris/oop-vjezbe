#include "myvector.hpp"

using namespace std;

void MyVector::vector_new()
{   
    int* temp;

    if (capacity == 0) {
        arr = new int[1];
        capacity = 1;
        
    }
    else {
        temp = new int[capacity];

        for (int i = 0; i < capacity; i++) {
            temp[i] = arr[i];
        }
        capacity = capacity * 2;
        arr = new int[capacity];


        for (int i = 0; i < capacity; i++) {
            arr[i] = temp[i];
        }
        delete[] temp;
 
    } 
}
void MyVector::vector_delete()
{
    delete[] arr;
}
void MyVector::vector_push_back(int n)
{
    if (size == capacity) {
        vector_new();
    }
    arr[size] = n;
    size++;
    
}
void MyVector::vector_pop_back()
{
    arr[size] = 0;
    size--;
}
int& MyVector::vector_front()
{

    return arr[0];
}
int& MyVector::vector_back()
{
    
    return arr[size-1];
}
int MyVector::vector_size()
{   
    return size;
}
void MyVector::print_vector()
{
    for (int i = 0; i < vector_size(); ++i)
        cout << arr[i] << " ";
    cout << endl;
}