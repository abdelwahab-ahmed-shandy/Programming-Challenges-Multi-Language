// Problem_31 >> Power of 2, 3, 4
// Write a program to ask the user to enter : Number
// # then print the  Number 2, Number 3, Number 4
// input >> 3
// output >> 9, 27, 81

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int Num;
	cout << "Enter Number : ";
	cin >> Num;
	return Num;
}

void PrintNumberOfPower(int Num)
{
	cout << "\n============================================\n";
	cout << "The Power "<<Num << " Of 2 : " << pow(Num, 2) << endl;
	cout << "The Power "<<Num << " Of 3 : " << pow(Num, 3) << endl;
	cout << "The Power "<<Num << " Of 4 : " << pow(Num, 4) << endl;
	cout << "============================================";
}


int main()
{
	PrintNumberOfPower(ReadNumber());
	return 0;
}
