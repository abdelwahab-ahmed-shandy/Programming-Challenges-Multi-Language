/*
Problem_12 >> Write a Program to read a number and Print inverted pattern .

Inverted Number Pattern

input>> 
5

output>>
55555
5555
555
55
5

*/
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin  >> Number;
	} while (Number <= 0);
	return Number;
}

void NumberPattern(int Number)
{
	for (int i = Number; i >= 0; i--)
	{
		for (int J = 0 ; J < i ; J++)
		{
			cout << i ;
		}
		cout << endl;
	}
}

int main()
{
	NumberPattern(ReadPositiveNumber("Enter positive number : "));
	return 0;
}
