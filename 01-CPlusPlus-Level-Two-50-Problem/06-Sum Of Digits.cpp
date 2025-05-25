/*
Problem_06 >> Write a Program to read a number and print the sum of its digits.
Sum Of Digits 
input>> 1234

output>>
Sum Of Digits : 10

*/

#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
int SumOfDigits(int Number)
{
	int Sum = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Remainder;
	}
	return Sum;
}
void PrintSumDigits(int Number)
{
	cout << "Sum of Digits = " << Number << endl;
}
int main()
{
	PrintSumDigits(SumOfDigits(ReadPositiveNumber("Please enter a positive number ? ")));
	return 0;
}
