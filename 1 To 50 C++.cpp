//Problem_1 >> Write a program to print your name on screen 

#include <iostream> 
using namespace std;

void PrintName(string Name) 
{
	cout << "Your Name Is : " << Name << endl;
}

int main()
{
	PrintName("Abdelwahab Shandy");
	
	return 0;
}
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_2 >> Write a program to ask the user to enter his / hir name and print it on screen

#include <iostream> 
#include <string>

using namespace std;

string ReadYourName()
{
	string YourName;

	cout << "Enter Your Name : ";
	getline(cin, YourName);
	return YourName;
}

void PrintYourName(string YourName)
{
	cout << "============================================\n";
	cout << "Your Name is : " << YourName << endl;
}

int main()
{
	PrintYourName(ReadYourName());
}
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_3 >> Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even

#include <iostream>
using namespace std;

int ReadNum(int &EnterNum) 
{
	cout <<"Write a program to ask the user to enter a number , then print ODD if its odd , or EVEN if its even"<<endl;
	cout << "Enter Your Number : ";
	cin >> EnterNum;
	return EnterNum;
}

enum enTYpeNumbers {ODD =1 ,EVEN =2 };

enTYpeNumbers CheakNumType(int EnterNum)
{
	int Result = EnterNum % 2;

	if (Result == 0)
		return enTYpeNumbers::EVEN;
	else
		return enTYpeNumbers::ODD;
}

void PrintTyprNum(enTYpeNumbers TypeNum)
{
	if (TypeNum == enTYpeNumbers::EVEN) 
	{
		cout <<endl<< "=====================" << endl;
		cout << "Number is a Even" << endl;
		cout << "=====================" << endl;
	}
	else
	{
		cout << endl << "=====================" << endl;
		cout << "Number is a Odd" << endl;
		cout << "=====================" << endl;
	}

}

int main()
{
	int enterNum;
	PrintTyprNum(CheakNumType(ReadNum(enterNum)));
	return 0;
}
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

Problem_7 >> Write a program to ask the user to enter : Number  , Then print the "Half of the <Number> is <???>"

#include <iostream>
using namespace std;

float ReadNumber() 
{
	float Number;
	cout << "Write a program to ask the user to enter : Number  , Then print the Half of the <Number> is < ? ? ? >" << endl << endl; 
	
	cout << "Enter Your Number :";
	cin >> Number;

	return Number;
}

float GetHalfNum( float Number)
{
	float  HalfNumber = Number / 2;
	return HalfNumber;
}

void PrintHalfNumber(float Number)
{
	cout << "\nHalf of the  " << Number << " is  " << GetHalfNum(Number) << endl;
}

int main()
{
	PrintHalfNumber(ReadNumber());

	return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

Problem_8 >> Write a program to ask the user to enter : Mark Then print the "PASS" if mark >= 50 , Otherwise print "Fail"

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_9 >>  Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers 

#include <iostream>
using namespace std;

void ReadNumbers(int Arry[3])
{
	cout << "Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers" << endl << endl;

	cout << "Enter Number 1 : ";
	cin >> Arry[0];

	cout << "Enter Number 2 : ";
	cin >> Arry[1];

	cout << "Enter Number 3 : ";
	cin >> Arry[2];
}

int SumNumbers(int Arry[3])
{
	int Sum;

	Sum = Arry[0] + Arry[1] + Arry[2];

	return Sum;
}

void PrintSumNumbers(int Sum)
{
	cout << "\n====================================\n";
	cout << "The Sum Of Numbers is : " << Sum << endl;
	cout << "====================================\n";
}

int main()
{
	int Arry[3];
	ReadNumbers(Arry);
	PrintSumNumbers(SumNumbers(Arry));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

Problem_10 >> Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then print the average of entered Marks

#include <iostream>
using namespace std;

void ReadMarks(float & Mark1 ,float & Mark2, float & Mark3)
{
	cout << "Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then print the average of entered Marks" << endl << endl;

	cout << "Enter Mark 1 : ";
	cin >> Mark1;

	cout << "Enter Mark 2 : ";
	cin >> Mark2;

	cout << "Enter Mark 3 : ";
	cin >> Mark3;
}

float SumMarks(float Mark1,float Mark2,float Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float AvergeCalc(float Mark1, float Mark2, float Mark3)
{
	return SumMarks(Mark1, Mark2, Mark3) / 3;
}

void PrintResutAverge(float Result)
{
	cout << "\n====================================\n";
	cout << "The Average Of Marks is : " << Result << endl;
	cout << "====================================\n";
}

int main()
{
	float Mark1, Mark2 , Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResutAverge(AvergeCalc(Mark1, Mark2, Mark3));

	return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

