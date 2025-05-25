// Print All Prime Numbers 1 To N 

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

enum enPrimeCheck { Prime = 1, NotPrime = 2 };

int CheckPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message ;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

enPrimeCheck CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int i = 2; i <= M; i++)
	{
		if (Number % i == 0)
			return enPrimeCheck::NotPrime;
	}
	return enPrimeCheck::Prime;
}

void PrintResultCheck(int Number)
{
	cout << "\n";
	cout << "Prime Numbers from " << 1 << " To " << Number;

	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimeCheck::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	PrintResultCheck(CheckPositiveNumber("Enter a Positive Number : "));
		return 0;
}
