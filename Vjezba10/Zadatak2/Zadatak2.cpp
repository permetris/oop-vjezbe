#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack<int> st;

    cout<<st.IsEmpty() << endl;

    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);
    st.Push(6);

    st.Pop(); 
    st.Pop();
    st.Pop();
    st.Pop();

    cout << st.IsEmpty() << endl;
}



