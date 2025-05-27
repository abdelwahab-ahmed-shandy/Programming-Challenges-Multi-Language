//Problem_4 >> Write a program to ask the user to enter his/her Age and Driver license Then print "Hired" if his/her age is grater than 21 and s/he has a driver license, otherwise print "Rejected"

#include <iostream>
using namespace std;

struct strInfo 
{
	string YourName;
	int Age;
	bool DriverLicense;
};

strInfo ReadInfo()
{
	cout << "Write a program to ask the user to enter his/her Age and Driver license Then print Hired if his/her age is grater than 21 and s/he has a driver license, otherwise print Rejected" << endl;
	
	strInfo person;
	cout << "Enter Your Name : ";
	cin >> person.YourName;

	cout << "How Old Are You : ";
	cin >> person.Age;

	cout << "Do you have a driving license (Yes type 1, No type 0) : ";
	cin >> person.DriverLicense;
	return person;
}

bool ChackInfoPerson(strInfo person)
{
	return (person.Age > 21 && person.DriverLicense);
}

void PrintAccepetORNot(strInfo person)
{
	if (ChackInfoPerson(person))
		cout <<endl << "Hello , Hired" << endl;
	else
		cout <<endl <<"Sorry , Rejected" << endl;
}

int main()
{
	PrintAccepetORNot(ReadInfo());
	return 0;
}
