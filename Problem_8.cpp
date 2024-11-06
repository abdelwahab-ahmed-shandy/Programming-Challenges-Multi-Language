// Problem_8 >> Write a program to ask the user to enter : Mark Then print the "PASS" if mark >= 50 , Otherwise print "Fail"

#include <iostream>
using namespace std;

float ReadMarkStudent()
{
	cout << "Write a program to ask the user to enter : Mark Then print the PASS if mark >= 50 , Otherwise print Fail" << endl << endl;

	float Mark;
	cout << "Enter Your Mark : ";
	cin >> Mark;
	
	return Mark;
}

string CheckPassFail(float Mark)
{
	string  result;
	if (Mark >= 50)
		result = "PASS";
	else 
		result = "FAIL";
	return result;
}

void PrintMarkStudent(float Mark)
{
	cout << endl << "You Are : " << CheckPassFail(Mark) << endl;
}

int main()
{
	PrintMarkStudent(ReadMarkStudent());

	return 0;
}

