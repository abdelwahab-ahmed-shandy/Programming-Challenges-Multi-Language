// Problem_46 >> Print Letter From a to z
// Write a program to print all letters from A to Z

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintAToZ()
{
    int i = 65;
	for (i ;  i <= 90 ;i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	PrintAToZ();
    return 0;
}

