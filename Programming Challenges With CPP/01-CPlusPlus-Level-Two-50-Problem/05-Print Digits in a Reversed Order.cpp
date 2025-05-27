/*
Problem_05 >> Write a Program to read a number and print it in a reverse order.
Print Digits in a Reverse Order
input>> 1234

output>>
4
3
2
1

*/

#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message ;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void PrintDigits(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}
int main()
{
	PrintDigits(ReadPositiveNumber("Please enter a positive number : "));
		return 0;
}
