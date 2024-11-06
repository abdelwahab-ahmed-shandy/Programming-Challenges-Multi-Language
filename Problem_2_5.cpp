// Problem_14 >> Swap Numbers Write a program to ask the user to user : Number1 . Number2  ,Then print two numbers , then swap the two numbers and print them 

#include <iostream>
using namespace std;

void ReadNumbers(int &Number1, int &Number2)
{
	cout << " Swap Numbers Write a program to ask the user to user : Number1 . Number2  ,Then print two numbers , then swap the two numbers and print them " << endl << endl;

	cout << "Enter Number 1  : ";
	cin >> Number1;

	cout << "Enter Number 2  : ";
	cin >> Number2;
}

//by reference 
void SwapNumbers(int &Number1,int &Number2)
{
	int Temp;
	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
}

void PrintNumber(int Number1, int Number2)
{
	cout << "\n==============================================\n";
	cout << "Number One is " << Number1 << " And Number Two is : " << Number2 << endl;
	cout << "==============================================\n";
}

int main()
{
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintNumber(Number1, Number2);

	SwapNumbers(Number1, Number2);
	PrintNumber(Number1, Number2);

	return 0;
}

