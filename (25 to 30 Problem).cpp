//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_26 >> Read numbers from 1 to N(loops)
// Write a program to print numbers from 1 to N

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to print numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}
void Print_1_To_N(int N)
{
	int i = 0;
	cout <<endl<< "The Number " << i << " Of Range " << N << endl << endl;
	for (i ; i <= N; i++)
	{
		i++;
		cout << "Number : " << i << endl;
	}
}

int main()
{
	Print_1_To_N(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_27 >> Read numbers from 1 to N (loops )
// Write a program to print numbers from N to 1 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to print numbers from N to 1 " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}

void Print_N_To_1(int N)
{
	int i = N +1;
	cout << endl << "The Number 1 Of Range " << N << endl << endl;
	
	while (i > 1)
	{
		i--;
		cout << "Number : " << i << endl;
	}
	
}

int main()
{
	Print_N_To_1(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_28 >> Sum Odd Numbers from 1 to N 
// Write a program to Sum ODD numbers from 1 to N

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to Sum ODD numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}
void PrintSumOdd(int N)
{
	int i = 0;
	int Sum = 0;
	cout << "Sum ODD Numbers From 1 to N" << endl << endl; 
	for (i; i < N; i++)
	{
		i = i + 1;
		cout <<"ODD Number : " << i << endl;
		Sum = Sum + i;
	}
	cout << "\n=============================\n";
	cout << "The Sum ODD Numbers From 1 To "<<N <<" Is " << Sum << endl;
}

int main()
{
	PrintSumOdd(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_29 >> Sum EVEN Numbers from 1 to N 
// Write a program to Sum EVEN numbers from 1 to N 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enEvenOdd {ODD = 0 , EVEN =2};

int ReadNumber()
{
	int N;
	cout << "Write a program to Sum EVEN Numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}

enEvenOdd Check(int N)
{
	if (N % 2 == 0)
		return enEvenOdd::EVEN;
	else
		return enEvenOdd::ODD;
}

int SumEVEN(int N)
{
	int Sum = 0;
	int i = 0; 
	cout << "=======================\n";
	for (i=1; i <= N; i++)
	{
		if (Check(i) == enEvenOdd::EVEN) 
		{
			Sum += i;
			cout << i << endl;
		}
	}
	cout << "=======================\n";
	return Sum;
}

void PrintSumEven(int Sum)
{
	cout << "The Sum Even Is : " << Sum<<endl; 
}

int main()
{
	PrintSumEven(SumEVEN(ReadNumber()));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_30 >> Factorial of N!
// Write a program to calculate factorial of N !
// factorial of 5 >> 5 * 4 * 3 * 2 * 1 = 120
// note : User should only positive number , other wise reject it and ask to enter again 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num;
	do
	{
		cout << Message ;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

int NumberFactorial(int N)
{
	int Factorial = 1;
	for (int i = N; i >= 1; i--)
	{
		Factorial = Factorial * i;
	}
	return Factorial;
}
void PrintNumberFactorial(int Factorial)
{
	cout << "The Positive number is : " << Factorial << endl;
}

int main()
{
	PrintNumberFactorial(NumberFactorial(ReadPositiveNumber("Enter a Positive Number :")));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================
