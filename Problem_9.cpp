// Problem_9 >>  Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers 

#include <iostream>
using namespace std;

void ReadNumbers(int Arry[3])
{
	cout << "Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers" << endl << endl;

	cout << "Enter Number 1 : ";
	cin >> Arry[0];

	cout << "Enter Number 2 : ";
	cin >> Arry[1];

	cout << "Enter Number 3 : ";
	cin >> Arry[2];
}

int SumNumbers(int Arry[3])
{
	int Sum;

	Sum = Arry[0] + Arry[1] + Arry[2];

	return Sum;
}

void PrintSumNumbers(int Sum)
{
	cout << "\n====================================\n";
	cout << "The Sum Of Numbers is : " << Sum << endl;
	cout << "====================================\n";
}

int main()
{
	int Arry[3];
	ReadNumbers(Arry);
	PrintSumNumbers(SumNumbers(Arry));
	return 0;
}

