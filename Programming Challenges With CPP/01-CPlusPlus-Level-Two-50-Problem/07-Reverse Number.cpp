/*
Problem_07 >> Write a Program to read a number and print it reverse
Reverse Number
input>> 1234

output>>4321

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
int ReverseNumber(int Number)
{
	int Remainder = 0, Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}
	return Number2;
}
void PrintReverseNumber(int Number)
{
	cout << "Reverse Number is: " << Number << endl;
}
int main()
{
	PrintReverseNumber(ReverseNumber(ReadPositiveNumber("Enter a Positive Number: ")));

	return 0;
}
