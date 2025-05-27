// Problem_37 >> Sum Until - 99
// Write a program to read numbers from user and sum them, keep reading unit the user enters - 99 then print the Sum on screen


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNum(string Message)
{
    float Num = 0;
    cout << Message << endl;
    cin >> Num;

    return Num;
}

float SumNum()
{
    int Sum = 0;
    int Number = 0;
    int Counter = 0;

    do
    {
        Number = ReadNum("Enter Number : ");
        if (Number == -99)
        {
            break;
        }
        Sum = Sum + Number;
        Counter++;
    } while (Number != -99);
    
    return Sum;
}

int main()
{
    cout << "===============================\n";
    cout << endl << "The Result = " << SumNum() << endl;
    cout << "===============================\n";
    return 0;
}

