// Multiplication Table 1 to 10 

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void PrintHeadProgramm()
{
	cout << endl <<"\n\t\t\t Multipliaction Table From 1 To 10					\n"<< endl;

	for (int I = 1; I <= 10; I++)
	{
		cout <<" \t " << I << "\t";
	}

	cout << "\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
}

string Space(int i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void HeadTable()
{

	for (int W = 1; W <= 10; W++)
	{
		cout <<" "<< W <<Space(W) << "\t";

		int L = 1;
		for ( L ; L <=  10; L++)
		{
			cout << W * L<<"\t\t";
		}
		cout << endl;
	}
}

int main()
{
	PrintHeadProgramm();
	HeadTable();
}
