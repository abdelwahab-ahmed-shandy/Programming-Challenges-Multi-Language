// Problem_12 >> Write a program to ask the user to enter : (Number1 , Number2) , Then print the max Number.


#include <iostream>
using namespace std;

void ReadNumbers(float &Number1, float &Number2)
{
	cout << "Write a program to ask the user to enter : (Number1 , Number2) , Then print the max Number" << endl << endl;

	cout << "Enter Number 1 : ";
	cin >> Number1;

	cout << "Enter Number 2 : ";
	cin >> Number2;
}

float MaxNumber(float Number1, float Number2)
{
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintMaxNumber(float MaxNum)
{
	cout << "\n==================\n";
	cout << "The Max Of Number is : " << MaxNum << endl;
	cout << "==================\n";
}


int main()
{
	float Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintMaxNumber(MaxNumber(Number1, Number2));
	return 0;
}

