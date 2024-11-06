//Problem_5 >> Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation! Then print "Hired if his/her" age is grater than 21 and s/he has a driver license , otherwise print "Rejected" Or Hire him/her without conditions! 

#include <iostream>
using namespace std;

struct strInfo
{
	string YourName;
	int Age;
	bool DriverLicense;
	bool Recommendation;
};

strInfo ReadInfo()
{
	cout << "Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation! Then print Hired if his / her age is grater than 21 and s/he has a driver license , otherwise print Rejected Or Hire him/her without conditions!" << endl;

	strInfo person;
	cout << "Enter Your Name : ";
	cin >> person.YourName;

	cout << "Do you Have Recommendition (Yes type 1, No type 0) : ";
	cin >> person.Recommendation;

	cout << "How Old Are You : ";
	cin >> person.Age;

	cout << "Do you have a driving license (Yes type 1, No type 0) : ";
	cin >> person.DriverLicense;
	return person;
}

bool ChackInfoPerson(strInfo person)
{
	if (person.Recommendation== true)
		return true;
	else 
		return (person.Age > 21 && person.DriverLicense);
}

void PrintAccepetORNot(strInfo person)
{
	if (ChackInfoPerson(person))
		cout << endl << "Hello , Hired" << endl;
	else
		cout << endl << "Sorry , Rejected" << endl;
}

int main()
{
	PrintAccepetORNot(ReadInfo());
	return 0;
}
