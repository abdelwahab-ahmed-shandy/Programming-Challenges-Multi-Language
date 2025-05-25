// Problem_28 >> Sum Odd Numbers from 1 to N 
// Write a program to Sum ODD numbers from 1 to N

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to Sum ODD numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}
void PrintSumOdd(int N)
{
	int i = 0;
	int Sum = 0;
	cout << "Sum ODD Numbers From 1 to N" << endl << endl; 
	for (i; i < N; i++)
	{
		i = i + 1;
		cout <<"ODD Number : " << i << endl;
		Sum = Sum + i;
	}
	cout << "\n=============================\n";
	cout << "The Sum ODD Numbers From 1 To "<<N <<" Is " << Sum << endl;
}

int main()
{
	PrintSumOdd(ReadNumber());
	return 0;
}

