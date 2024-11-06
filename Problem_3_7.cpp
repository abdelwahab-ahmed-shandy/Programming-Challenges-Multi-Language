// Problem_25 >> Read until Age between 18 and 45
// Write a program to ask the user to enter : age if age is 18 and 45 print "Valid Age" otherwise print "Invalid Age" and re - ask user to enter a valid age .
// note : you should keep asking user to enter a valid age until s / she enters it .

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge ()
{
	//cout << "Write a program to ask the user to enter : age if age is 18 and 45 print Valid Age otherwise print Invalid Age and re - ask user to enter a valid age" << endl << endl;
	int Age;
	cout << "Enter Your Age : ";
	cin >> Age;
	return Age;
}

bool CheckValidAge(int Age , int From , int To)
{
	return (Age >= From && Age <= To);
}

int KeepAskingUser(int From , int To)
{
	int Age = 0;
	do
	{
		Age = ReadAge(); 
	} while (!CheckValidAge(Age , From , To));
	return Age;
}

void PrintValideAge(int Age)
{
	cout << "Your Age is  " << Age << " Valid Age " << endl;
}

int main()
{
	
	PrintValideAge(KeepAskingUser(18,45));
	return 0;
}
