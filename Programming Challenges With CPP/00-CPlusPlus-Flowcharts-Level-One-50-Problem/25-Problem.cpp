// Problem_24 >> Validate Age Between 18 and 45
// Write a program to ask the user enter Age
// - If age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge ()
{
	cout << "Write a program to ask the user enter Age If age is between 18 and 45 print Valid Age otherwise print Invalid Age" << endl << endl;
	int Age;
	cout << "Enter Your Age : ";
	cin >> Age;
	return Age;
}
bool CheckValidAge(int Age , int From , int To)
{
	return (Age >= From && Age <= To);
}

void PrintValideAge(int Age)
{
	if (CheckValidAge(Age, 18, 45))
	{
		cout << "\n========================\n";
		cout << Age << " Is Valid Age" << endl;
		cout << "========================\n";
	}
	else
	{
		cout << "\n========================\n";
		cout << Age << " Is InValid Age" << endl;
		cout << "========================\n";
	}
}

int main()
{
	PrintValideAge(ReadAge());
	return 0;
}

