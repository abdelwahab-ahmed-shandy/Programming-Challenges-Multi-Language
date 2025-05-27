// 14 - Inverted Letter Number.cpp

#include <iostream>
using namespace std;

int ReadCheckPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void InvertedLetter(int Number)
{
	for (int i = 65+Number-1 ; i >= Number; i--)
	{
		for (int J = 1; J <= Number -(65+Number -1-i); J++)
		{
			cout << char(i);

		}
		cout << endl;
	}
}



int main()
{
	InvertedLetter(ReadCheckPositiveNumber("Enter Positive Number : "));
	return 0;
}
