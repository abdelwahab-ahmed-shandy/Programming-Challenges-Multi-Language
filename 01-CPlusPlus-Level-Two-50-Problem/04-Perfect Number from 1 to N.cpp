// Perfect Number from 1 to N

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int CheckPositiveNumber(string Mseeage)
{
	int Number = 0;

	do
	{
		cout << Mseeage;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool IsPrimeNum(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum = Sum + i;
	}
	return Number == Sum;
}

void PrintCheckPrame(int Number)
{
	for (int i = 1 ; i < Number; i++)
	{
		if (IsPrimeNum(i))
			cout << i << endl;
	}
}

int main()
{
	PrintCheckPrame(CheckPositiveNumber("Enter Positive Number : "));
	return 0;
}
