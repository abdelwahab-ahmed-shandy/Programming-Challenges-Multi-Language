//Problem_26 >> Read numbers from 1 to N(loops)
// Write a program to print numbers from 1 to N

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to print numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}
void Print_1_To_N(int N)
{
	int i = 0;
	cout <<endl<< "The Number " << i << " Of Range " << N << endl << endl;
	for (i ; i <= N; i++)
	{
		i++;
		cout << "Number : " << i << endl;
	}
}

int main()
{
	Print_1_To_N(ReadNumber());
	return 0;
}
