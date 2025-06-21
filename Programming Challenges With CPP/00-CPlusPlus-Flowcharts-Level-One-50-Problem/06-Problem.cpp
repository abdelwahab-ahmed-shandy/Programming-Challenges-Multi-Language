//Problem_6 >> Write a program to ask user to enter : first name amd last name

#include <iostream>
using namespace std;

struct strPersonalInfo
{
	string FirstName;
	string LastName;
};

strPersonalInfo ReadPersonlInfo()
{	
	cout << "Write a program to ask user to enter : first name amd last name" << endl;
	strPersonalInfo person;

	cout << "Enter Your First Name : ";
	cin >> person.FirstName;

	cout << "Enter Your Last Name : ";
	cin >> person.LastName;

	return person;
}

void PrintPersonalInfo(strPersonalInfo person)
{
	cout << endl << "Your ia a Full Name : " << person.FirstName << " " << person.LastName << endl;
}


int main()
{
	PrintPersonalInfo(ReadPersonlInfo());
	return 0;
}

//=====================================================================================================================================
//=====================================================================================================================================
//=====================================================================================================================================

/*
* 
* Problem_6 
* 
* Write a program to ask user to enter : first name amd last name
* 
*/

#include <iostream>
#include <string>

using namespace std;

struct stInfoPerson
{
    string firstName;
	string lastName;
};

string enterYourFirstName()
{
    string firstName;
    cout << "Enter Your First Name : ";
    getline(cin, firstName);
    
    return firstName;
}

string enterYourLastName()
{
    string lastName;
    cout << "Enter Your Last Name : ";
    getline(cin, lastName);

    return lastName;
}

stInfoPerson ReadInfo()
{
    stInfoPerson Info;

    Info.firstName = enterYourFirstName();

    Info.lastName = enterYourLastName();

    return Info;
}

void PrintInfoPerson(stInfoPerson Info)
{
    cout << "\n Your Full Name Is : " << Info.firstName << Info.lastName << endl;
}


int main()
{
    PrintInfoPerson(ReadInfo());
    return 0;
}
