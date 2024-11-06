// Problem_49 >> ATM PIN
// Write a program to read the ATM PIN code from the user, Then check if PIN code = 1234, Then show the balance to user, otherwise print " Wong PIN " and ask the user to enter the PIN again
// Assume User Balance is 7500
// If he enters the wrong pin, I will make him read it again and make the screen red.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPin()
{
    string PinCode;
    cout << "Enter Pin Code : ";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode == ReadPin();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\nWrong Pin Code\n";
            system("color 4F"); // Red
        }

    } while (PinCode !="1234");
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // green
        cout << endl << "Your account Balance is : " << 7500 << endl;
    }
    return 0;
}
