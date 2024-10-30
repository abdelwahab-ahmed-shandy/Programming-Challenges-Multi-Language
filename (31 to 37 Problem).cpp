//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_31 >> Power of 2, 3, 4
// Write a program to ask the user to enter : Number
// # then print the  Number 2, Number 3, Number 4
// input >> 3
// output >> 9, 27, 81

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int Num;
	cout << "Enter Number : ";
	cin >> Num;
	return Num;
}

void PrintNumberOfPower(int Num)
{
	cout << "\n============================================\n";
	cout << "The Power "<<Num << " Of 2 : " << pow(Num, 2) << endl;
	cout << "The Power "<<Num << " Of 3 : " << pow(Num, 3) << endl;
	cout << "The Power "<<Num << " Of 4 : " << pow(Num, 4) << endl;
	cout << "============================================";
}


int main()
{
	PrintNumberOfPower(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_32 >> Power of M (LOOPS)
// Write a program to ask the user to enter : Number , M 
// Then print the Number ^ M
// input >> 2 , 4
// output >> 16 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumber(int &Num , int &M)
{
	cout << "Enter Number : ";
	cin >> Num;
	cout << "Enter M : ";
	cin >> M;
}

void PrintNumberOfPower(int Num , int M)
{
	cout << "\n============================================\n";
	cout << "The Power "<< Num << " Of " << M <<" : " << pow(Num, M) << endl;
	cout << "============================================";
}


int main()
{
	int Num, M;
	ReadNumber(Num, M);
	PrintNumberOfPower(Num, M);
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_33 >> Grade A, B, C, D, E, F
//Write a program to ask the user to enter : Grade
//Then print the grade as follows :
//-100 - 90 print A
//- 89 - 80 print B
//- 79 - 70 print C
//- 69 - 60 print D
//- 59 - 50 print E
//Overwise print F


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadGread(int From , int To)
{
	int Grade;
	do 
	{
		cout << "Enter Your Grade between 0 To 100 : ";
		cin >> Grade;
	} while (Grade<From || Grade >To);
	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

void PrintGrade(char Grade)
{
	cout << "The Result is :" << Grade << endl;
}

int main()
{
	PrintGrade(GetGradeLetter(ReadGread(0, 100)));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//  Problem_34 >> Commission Percentage
//  Write a program to ask the user to enter : Total sales
//  - The commission is calculate as one percentage * the total sales amount, all you need is to decide which percentage to use of the following :
//  > 1000, 000 -- > Percentage is 1 %
//  > 500K to 1M-- > Percentage is 2 %
//  > 100K - 500K-- > Percentage is 3 %
//  > 50K to 100K-- > Percentage is 5 %
//  > otherwise-- > Percentage is 0 %
//  Input >> 110, 000
//  Output >> 3, 300


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadTotalSalse()
{
    float TotalSalse;

    cout << "Enter a Total Sales: ";
    cin >> TotalSalse;
    return TotalSalse;
}

float CommissionSalse(float TotalSalse)
{
    if (TotalSalse >= 1000000)
        return 0.01;
    else if (TotalSalse >= 500000)
        return 0.02;
    else if (TotalSalse >= 100000)
        return 0.03;
    else if (TotalSalse >= 50000)
        return 0.05;
    else
        return 0.00;
}

float CalcuCommissionPercentage(float TotalSalse)
{
    return CommissionSalse(TotalSalse) * TotalSalse;
}

void PrintCommissionPercentage(float TotalSalse)
{
    float commissionRate = CommissionSalse(TotalSalse);
    float totalCommission = CalcuCommissionPercentage(TotalSalse);

    cout << endl << "Commission Percentage = " << commissionRate * 100 << "%" << endl;
    cout << "Total Commission = " << totalCommission << endl;
}

int main()
{
    float totalSales = ReadTotalSalse();
    PrintCommissionPercentage(totalSales);
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_35 >> Piggy Bank Calculator 
//Write a program to ask the user to enter:
//Pennies , Nickels , Dimes , Quarters , Dollars 
//#Then calculate the total pennies , total dollars and print them on screen giving that :
//- penny  = 1
//- Nickel = 5
//- Dime   = 10
//- Quarter= 25
//- Dollar = 100

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct strMoney
{
    int Penny;
    int Nickel;
    int Dime;
    int Quarter;
    int Dollar;
};

strMoney ReadMony()
{
    strMoney MonyPNDQD;

    cout << "Enter Your Total Penny : ";
    cin >> MonyPNDQD.Penny;
    cout << "Enter Your Total Nickel : ";
    cin >> MonyPNDQD.Nickel;
    cout << "Enter Your Total Dime : ";
    cin >> MonyPNDQD.Dime;
    cout << "Enter Your Total Quarter : ";
    cin >> MonyPNDQD.Quarter;
    cout << "Enter Your Total Dollar : ";
    cin >> MonyPNDQD.Dollar;

    return MonyPNDQD;
}

int CalcuMonyPNDQD(strMoney MonyPNDQD)
{
    int TotalPennies = 0;
    TotalPennies = (MonyPNDQD.Penny * 1) + (MonyPNDQD.Nickel * 5) + (MonyPNDQD.Dime * 10) + (MonyPNDQD.Quarter * 25) + (MonyPNDQD.Dollar * 100);
    return TotalPennies;
}


int main()
{
    int TotalPennies, TotalDollar;

    TotalPennies = CalcuMonyPNDQD(ReadMony());
    //TotalDollar = CalcuMonyPNDQD(ReadMony()) / 100;

    cout << "\nTotal Pennies is : "<< TotalPennies <<endl;
    cout << "\nTotal Pennies is : " << TotalPennies /100 << endl;

    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_36 >> Simple Calculator
// Write a program to ask the user to enter :
// -Number1, Number2, Operation Type
// Then perform the calculation according to the operation type as follows :
// -"+" add the two numbers.
// - "-" subtract the two numbers.
// - "*" multiply the two numbers.
// - "/" devide the two numbers.


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
    float Num = 0;
    cout << Message << endl;
    cin >> Num;

    return Num;
}

enum enTypeOpert { Add, Subtract, Multiply, Divide };

enTypeOpert ReadTypeOpert()
{
    char CharTypeOpert;
    cout << "Enter Operation Type ( +, - , * , / ) : " << endl;
    cin >> CharTypeOpert;
    switch (CharTypeOpert)
    {
    case '+':
        return enTypeOpert::Add;
    case '-':
        return enTypeOpert::Subtract;
    case '*':
        return enTypeOpert::Multiply;
    case '/':
        return enTypeOpert::Divide;
    default:
        cout << "Invalid Operation, defaulting to Add." << endl;
        return enTypeOpert::Add;
    }
}

float CalcuNumbers(float Num1, float Num2, enTypeOpert TypeOperation)
{
    switch (TypeOperation)
    {
    case enTypeOpert::Add:
        return Num1 + Num2;
    case enTypeOpert::Subtract:
        return Num1 - Num2;
    case enTypeOpert::Multiply:
        return Num1 * Num2;
    case enTypeOpert::Divide:
        return Num1 / Num2;
    default:
        return Num1 + Num2;
    }
}

int main()
{
    float Num1 = ReadNumber("Enter the First Number");
    float Num2 = ReadNumber("Enter the Second Number");

    enTypeOpert CharTypeOpert = ReadTypeOpert();

    cout << "\nResult : " << CalcuNumbers(Num1, Num2, CharTypeOpert) << endl;

    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_37 >> Sum Until - 99
// Write a program to read numbers from user and sum them, keep reading unit the user enters - 99 then print the Sum on screen


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNum(string Message)
{
    float Num = 0;
    cout << Message << endl;
    cin >> Num;

    return Num;
}

float SumNum()
{
    int Sum = 0;
    int Number = 0;
    int Counter = 0;

    do
    {
        Number = ReadNum("Enter Number : ");
        if (Number == -99)
        {
            break;
        }
        Sum = Sum + Number;
        Counter++;
    } while (Number != -99);
    
    return Sum;
}

int main()
{
    cout << "===============================\n";
    cout << endl << "The Result = " << SumNum() << endl;
    cout << "===============================\n";
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================
