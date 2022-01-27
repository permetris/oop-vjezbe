#include "sentence.h"

int main()
{
    string myString = "Ja bih ,ako ikako mogu, ovu recenicu napisala ispravno.";

    cout << myString<<endl;
    cleanUpString(myString);
    cout << myString;
}

