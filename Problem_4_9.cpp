// Problem_36 >> Simple Calculator
// Write a program to ask the user to enter :
// -Number1, Number2, Operation Type
// Then perform the calculation according to the operation type as follows :
// -"+" add the two numbers.
// - "-" subtract the two numbers.
// - "*" multiply the two numbers.
// - "/" devide the two numbers.


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
    float Num = 0;
    cout << Message << endl;
    cin >> Num;

    return Num;
}

enum enTypeOpert { Add, Subtract, Multiply, Divide };

enTypeOpert ReadTypeOpert()
{
    char CharTypeOpert;
    cout << "Enter Operation Type ( +, - , * , / ) : " << endl;
    cin >> CharTypeOpert;
    switch (CharTypeOpert)
    {
    case '+':
        return enTypeOpert::Add;
    case '-':
        return enTypeOpert::Subtract;
    case '*':
        return enTypeOpert::Multiply;
    case '/':
        return enTypeOpert::Divide;
    default:
        cout << "Invalid Operation, defaulting to Add." << endl;
        return enTypeOpert::Add;
    }
}

float CalcuNumbers(float Num1, float Num2, enTypeOpert TypeOperation)
{
    switch (TypeOperation)
    {
    case enTypeOpert::Add:
        return Num1 + Num2;
    case enTypeOpert::Subtract:
        return Num1 - Num2;
    case enTypeOpert::Multiply:
        return Num1 * Num2;
    case enTypeOpert::Divide:
        return Num1 / Num2;
    default:
        return Num1 + Num2;
    }
}

int main()
{
    float Num1 = ReadNumber("Enter the First Number");
    float Num2 = ReadNumber("Enter the Second Number");

    enTypeOpert CharTypeOpert = ReadTypeOpert();

    cout << "\nResult : " << CalcuNumbers(Num1, Num2, CharTypeOpert) << endl;

    return 0;
}

