// Problem_32 >> Power of M (LOOPS)
// Write a program to ask the user to enter : Number , M 
// Then print the Number ^ M
// input >> 2 , 4
// output >> 16 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumber(int &Num , int &M)
{
	cout << "Enter Number : ";
	cin >> Num;
	cout << "Enter M : ";
	cin >> M;
}

void PrintNumberOfPower(int Num , int M)
{
	cout << "\n============================================\n";
	cout << "The Power "<< Num << " Of " << M <<" : " << pow(Num, M) << endl;
	cout << "============================================";
}


int main()
{
	int Num, M;
	ReadNumber(Num, M);
	PrintNumberOfPower(Num, M);
	return 0;
}

