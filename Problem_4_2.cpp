// Problem_29 >> Sum EVEN Numbers from 1 to N 
// Write a program to Sum EVEN numbers from 1 to N 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enEvenOdd {ODD = 0 , EVEN =2};

int ReadNumber()
{
	int N;
	cout << "Write a program to Sum EVEN Numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}

enEvenOdd Check(int N)
{
	if (N % 2 == 0)
		return enEvenOdd::EVEN;
	else
		return enEvenOdd::ODD;
}

int SumEVEN(int N)
{
	int Sum = 0;
	int i = 0; 
	cout << "=======================\n";
	for (i=1; i <= N; i++)
	{
		if (Check(i) == enEvenOdd::EVEN) 
		{
			Sum += i;
			cout << i << endl;
		}
	}
	cout << "=======================\n";
	return Sum;
}

void PrintSumEven(int Sum)
{
	cout << "The Sum Even Is : " << Sum<<endl; 
}

int main()
{
	PrintSumEven(SumEVEN(ReadNumber()));
	return 0;
}

