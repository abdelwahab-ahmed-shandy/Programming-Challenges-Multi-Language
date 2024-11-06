// Problem_7 >> Write a program to ask the user to enter : Number  , Then print the "Half of the <Number> is <???>"

#include <iostream>
using namespace std;

float ReadNumber() 
{
	float Number;
	cout << "Write a program to ask the user to enter : Number  , Then print the Half of the <Number> is < ? ? ? >" << endl << endl; 
	
	cout << "Enter Your Number :";
	cin >> Number;

	return Number;
}

float GetHalfNum( float Number)
{
	float  HalfNumber = Number / 2;
	return HalfNumber;
}

void PrintHalfNumber(float Number)
{
	cout << "\nHalf of the  " << Number << " is  " << GetHalfNum(Number) << endl;
}

int main()
{
	PrintHalfNumber(ReadNumber());

	return 0;
}
