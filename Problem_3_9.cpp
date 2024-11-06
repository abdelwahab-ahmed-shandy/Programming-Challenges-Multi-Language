// Problem_27 >> Read numbers from 1 to N (loops )
// Write a program to print numbers from N to 1 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to print numbers from N to 1 " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}

void Print_N_To_1(int N)
{
	int i = N +1;
	cout << endl << "The Number 1 Of Range " << N << endl << endl;
	
	while (i > 1)
	{
		i--;
		cout << "Number : " << i << endl;
	}
	
}

int main()
{
	Print_N_To_1(ReadNumber());
	return 0;
}

