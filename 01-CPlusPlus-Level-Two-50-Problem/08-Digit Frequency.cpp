/*
Problem_08 >> Write a Program to read a digit and a number , 
then print digit frequency in that number.
Didit Frequency 
input>> 1223222
        2
output>>
Digit 2 frequency is 5 Times

*/
#include <iostream>
using namespace std;

void CheckPositiveNumber(int &Number, int & Digit)
{
    do
    {
        cout << "Enter a positive number: ";
        cin >> Number;
    } while (Number <= 0); 

    do
    {
        cout << "Choose a digit (1-9) to check frequency: ";
        cin >> Digit;
    } while (Digit < 1 || Digit > 9);
}

int HowNumDigitFrequency(int Number, int Digit)
{
    int Remainder = 0;
    int Frequency = 0;
    while (Number > 0)
    {
        Remainder = Number % 10; 
        Number = Number / 10;
        if (Remainder == Digit)
        {
            Frequency++; 
        }
    }
    return Frequency;
}

void PrintDigitFrequency(int Digit, int Frequency)
{
    cout << endl << "Digit " << Digit << " frequency is " << Frequency << " time(s)." << endl;
}

int main()
{
    int Number, Digit;
    CheckPositiveNumber(Number, Digit);
    int Frequency = HowNumDigitFrequency(Number, Digit);
    PrintDigitFrequency(Digit, Frequency);

    return 0;
}

