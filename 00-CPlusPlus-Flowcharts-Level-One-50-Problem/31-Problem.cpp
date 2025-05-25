// Problem_30 >> Factorial of N!
// Write a program to calculate factorial of N !
// factorial of 5 >> 5 * 4 * 3 * 2 * 1 = 120
// note : User should only positive number , other wise reject it and ask to enter again 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num;
	do
	{
		cout << Message ;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

int NumberFactorial(int N)
{
	int Factorial = 1;
	for (int i = N; i >= 1; i--)
	{
		Factorial = Factorial * i;
	}
	return Factorial;
}
void PrintNumberFactorial(int Factorial)
{
	cout << "The Positive number is : " << Factorial << endl;
}

int main()
{
	PrintNumberFactorial(NumberFactorial(ReadPositiveNumber("Enter a Positive Number :")));
	return 0;
}
