// Problem_38 >> Is Prime Number ? 
// Write a program to read a number and check if it is a prime number or not 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeOrNot {Prime =1 , NotPrime= 2};

enPrimeOrNot CheckPrime(int Num)
{
	int M = round(Num / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
			return enPrimeOrNot::NotPrime;
	}
	return enPrimeOrNot::Prime;
}

float ReadPositiveNumber(string Message)
{
	float Num = 0;

	do
	{
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void PrintNum(int Num)
{
	switch (CheckPrime(Num))
	{
	case enPrimeOrNot::Prime:
		cout << "Prime Number \n";
		break;
	case enPrimeOrNot::NotPrime:
		cout << "Not Prime Number \n";
		break;
	}
}

int main()
{
	PrintNum(ReadPositiveNumber("Enter Positive Number : "));
    return 0;
}

