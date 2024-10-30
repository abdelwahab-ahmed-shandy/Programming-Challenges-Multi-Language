//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_44 >> Day of week
// Write a program to ask the user to enter : Day
// Then Print the day as follows :
// 1 Print Sunday
// 2 Print Monday
// 3 Print Tuesday
// 4 Print Wednesday
// 5 Print Thursday
// 6 Print Friday
// 7 Print Saturday
// - Otherwise print  " Wrong Day " and ask the use to enter the day again

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enDays { Sunday = 1, Monday = 2 , Tuesday = 3 , Wednesday = 4 , Thursday = 5, Friday= 6, Saturday=7};

int ReadNumberOfDay(string Message, int From, int To)
{
    int Num = 0;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (Num < From || Num >To);
    
    return Num;
}

enDays ReadDayOfWeek()
{
    return (enDays)ReadNumberOfDay("Enter Day Number Sunday = 1 Monday = 2  Tuesday = 3  Wednesday = 4  Thursday = 5  Friday = 6  Saturday = 7", 1 ,7);
}

string DayOfWeek(enDays Day)
{
    switch (Day)
    {
    case enDays::Sunday:
        return "Sunday";
    case enDays::Monday:
        return "Monday";
    case enDays::Tuesday:
        return "Tuesday";
    case enDays::Wednesday:
        return "Wednesday";
    case enDays::Thursday:
        return "Thursday";
    case enDays::Friday:
        return "Friday";
    case enDays::Saturday:
        return "Saturday";
    default :
        return "Not Found";
    }
}

int main()
{
    cout << DayOfWeek(ReadDayOfWeek()) << endl;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_45 >> Month Of year
// Write a program to ask the user to enter : Month
// Then Print the day as follows :
// 1 print Jun
// 2 print Feb
// 3 print Mar
// 4 print Apr
// 5 print May
// 6 print June
// 7 print July
// 8 print Aug
// 9 print Sep
// 10 print Oct
// 11 print Nov
// 12 print December
// - Otherwise print  " Wrong Day " and ask the use to enter the Manth again

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enMonth
{
    Jun = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, June = 6,
    July = 7, Aug = 8, Sep = 9, Oct = 10, Nov=11, Dec = 12
};

int ReadNumInReange(string Message, int From, int To)
{
    int Num = 0;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (From > Num || Num > To);
    return Num;
}

enMonth ReadMonthYear()
{
    return (enMonth)ReadNumInReange("Enter Number Of Month : ", 1, 12);
}

string GetMonth(enMonth Month)
{
    switch (Month)
    {
    case enMonth::Jun :
        return "Jun";
    case enMonth::Feb:
        return "Feb";
    case enMonth::Mar:
        return "Mar";
    case enMonth::Apr:
        return "Apr";
    case enMonth::May:
        return "May";
    case enMonth::June:
        return "June";
    case enMonth::July:
        return "July";
    case enMonth::Aug:
        return "Aug";
    case enMonth::Sep:
        return "Sep";
    case enMonth::Oct:
        return "Oct";
    case enMonth::Nov:
        return "Nov";
    case enMonth::Dec:
        return "Dec";
    default:
        return "Not Found";
    }
}

int main()
{
    cout << GetMonth(ReadMonthYear()) << endl;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_46 >> Print Letter From a to z
// Write a program to print all letters from A to Z

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintAToZ()
{
    int i = 65;
	for (i ;  i <= 90 ;i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	PrintAToZ();
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================


// Problem_47 >> Loan Installment Months 
// Write a program to read a LoanAmount and MonthlyPayment and Calculate how many months you needs to settle the loan.


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadLoanInstallment(float &LoanAmount,float &MonthlyPayment)
{
    cout << "How to Loan Amount : ";
    cin >> LoanAmount;
    cout << "How to Monthly Payment : ";
    cin >> MonthlyPayment;
}
float CalcuLoanInstallment(float LoanAmount, float MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;
}

int main()
{
    float LoanAmount, MonthlyPayment;
    ReadLoanInstallment(LoanAmount, MonthlyPayment);
    cout <<"\nThe total Month is : " << CalcuLoanInstallment(LoanAmount, MonthlyPayment)<<endl ;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_48 >> Monthy Loan Installment 
// Write a program to read a LoanAmount and ask you how many months you need to settle the loan , then calculate the monthly installment amount .

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadLoanInstallment(float &LoanAmount,float & HowManyMonthly)
{
    cout << "How to Loan Amount : ";
    cin >> LoanAmount;
    cout << "How Many Need A Monthly : ";
    cin >> HowManyMonthly;
}
float CalcuLoanInstallment(float LoanAmount, float HowManyMonthly)
{
    return LoanAmount / HowManyMonthly;
}

int main()
{
    float LoanAmount, HowManyMonthly;
    ReadLoanInstallment(LoanAmount, HowManyMonthly);
    cout <<"\nThe Total Monthly Payment is : " << CalcuLoanInstallment(LoanAmount, HowManyMonthly)<<endl ;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_49 >> ATM PIN
// Write a program to read the ATM PIN code from the user, Then check if PIN code = 1234, Then show the balance to user, otherwise print " Wong PIN " and ask the user to enter the PIN again
// Assume User Balance is 7500
// If he enters the wrong pin, I will make him read it again and make the screen red.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPin()
{
    string PinCode;
    cout << "Enter Pin Code : ";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode == ReadPin();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\nWrong Pin Code\n";
            system("color 4F"); // Red
        }

    } while (PinCode !="1234");
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // green
        cout << endl << "Your account Balance is : " << 7500 << endl;
    }
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_50 >> ATM PIN 3 Times
// Write a program to read the ATM PIN code from the user, then check if code = 1234, then show the balance to user, otherwise print " Wrong PIN " and ask the user to enter  the PIN again
// #Only  allow user to enter the PIN 3 times, if fails, print " Card is locked "
// - Assume user Balance is 7500

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPin()
{
    string PinCode;
    cout << "Enter Pin Code : ";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    int i = 3;
    string PinCode;
    do
    {
        i--;
        PinCode = ReadPin();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\nWrong Pin Code You Have \n"<<i <<"More try"<<endl; 
            system("color 4F"); // Red
        }

    } while (PinCode !="1234" && i >=1);
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // green
        cout << endl << "Your account Balance is : " << 7500 << endl;
    }
    else
    {
        cout << "\nYour Card Blocked Call The Bank For Help \n";
    }
    return 0;
}


//================================================================================================================================================================
//========================================================================== THIS IS END =========================================================================
//================================================================================================================================================================
