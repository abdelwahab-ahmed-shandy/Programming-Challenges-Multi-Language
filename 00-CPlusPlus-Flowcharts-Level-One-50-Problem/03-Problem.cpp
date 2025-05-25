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
