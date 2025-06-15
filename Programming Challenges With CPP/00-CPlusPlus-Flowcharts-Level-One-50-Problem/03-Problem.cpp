/*
* Problem 3
*
* Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even
*
*/

#include <iostream>
#include <string>

using namespace std;

int readNumber(int& enterNumber)
{
	cout << "Write a program to ask the user to enter a number , then print ODD if its odd , or EVEN if its even" << endl;
	cout << "Enter Your Number : ";
	cin >> enterNumber;
	return enterNumber;
}

enum enTypeNumber
{
	ODD = 0,
	EVEN = 1
};

enTypeNumber CheakTypeNumber(int enterNumber)
{
	int Result = enterNumber % 2;

	if (Result == 0)
		return enTypeNumber::EVEN;
	else
		return enTypeNumber::ODD;
}

void PrintTypeNumber(enTypeNumber TypeNumber)
{
	if (TypeNumber == enTypeNumber::EVEN)
	{
		cout << endl << "---------------------" << endl;
		cout << "The Number Is Even " << endl;
		cout << "---------------------" << endl;
	}
	else
	{
		cout << endl << "---------------------" << endl;
		cout << "The Number Is Odd " << endl;
		cout << "---------------------" << endl;
	}
}


int main()
{
	int enterNum;
	PrintTypeNumber(CheakTypeNumber(readNumber(enterNum)));
	return 0;
}
