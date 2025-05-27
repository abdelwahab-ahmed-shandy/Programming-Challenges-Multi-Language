/*
Problem_09 >> Write a Program to read a digit and a number , 
then print All frequency in that number.
All Didit Frequency 
input>> 1223222
        
output>>
Digit 1 frequency is 1 Times
Digit 2 frequency is 5 Times
Digit 3 frequency is 1 Times

*/
#include <iostream>
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
int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}

void PrintAllDigitsFrequencey(int Number)
{
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		short DigitFrequency = 0;
		DigitFrequency = CountDigitFrequency(i, Number);
		if (DigitFrequency > 0)
		{
			cout << "Digit " << i << " Frequencey is "
				<< DigitFrequency << " Time(s).\n";
		}
	}
}
int main()
{
	int Number = ReadPositiveNumber("Please enter the a number?");
	PrintAllDigitsFrequencey(Number);
	return 0;
}
