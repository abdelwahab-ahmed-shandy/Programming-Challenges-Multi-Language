//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_38 >> Is Prime Number ? 
// Write a program to read a number and check if it is a prime number or not 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeOrNot {Prime =1 , NotPrime= 2};

enPrimeOrNot CheckPrime(int Num)
{
	int M = round(Num / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
			return enPrimeOrNot::NotPrime;
	}
	return enPrimeOrNot::Prime;
}

float ReadPositiveNumber(string Message)
{
	float Num = 0;

	do
	{
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void PrintNum(int Num)
{
	switch (CheckPrime(Num))
	{
	case enPrimeOrNot::Prime:
		cout << "Prime Number \n";
		break;
	case enPrimeOrNot::NotPrime:
		cout << "Not Prime Number \n";
		break;
	}
}

int main()
{
	PrintNum(ReadPositiveNumber("Enter Positive Number : "));
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================


// Problem_39 >> Pay Remainder ? 
// Write a program to read a totalBill nd cashpaid and calculate the remainder to paid back .


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadBillPaid(float &TotalBill,float &CashPaid)
{
    cout << "Enter The Total Bill :";
    cin >> TotalBill;
    cout << "Enter The Cash Paid :";
    cin >> CashPaid;
}

float CalcuPayRemainder(float TotalBill,float CashPaid)
{
    float TotalPayRemainder = CashPaid - TotalBill;
    return TotalPayRemainder;
}

void PrintRemainder(float TotalPayRemainder)
{
    cout << endl << "The Total Pay Remainder : " << TotalPayRemainder << endl;
}

int main()
{
    float TotalBill, CashPaid;
    ReadBillPaid(TotalBill, CashPaid);
    PrintRemainder(CalcuPayRemainder(TotalBill, CashPaid));
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_40 >> Sevice Fee and Salse Tax
// Write a program to read a BillValue and add Service fee and salse tax tax to it, and print the totalbill on the screen
// - A Resturant charge 10 % services fee and 16 % salse Tax

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadBillValue()
{
    float BillValue = 0;
    cout << "Enter The Bill Value : ";
    cin >> BillValue;
    return BillValue;
}
float CalcuTotalBill(float BillValue)
{
    float TotalBill = BillValue * 1.1  ;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}
void PrintTotalBill(float TotalBill)
{
    cout << endl << "The Total Bill Is : " << TotalBill << endl;
}
int main()
{
    PrintTotalBill(CalcuTotalBill(ReadBillValue()));
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_41 >> Weeks and Days
// Write a program to read a NumberOfHours and calculate the number of weeks and days included in that number

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumOfHours()
{
    float NumOfHours = 0;
    cout << "Enter The Number Of Hours: ";
    cin >> NumOfHours;
    return NumOfHours;
}

void CalcWeekDay(float NumOfHours, float& NumOfDays, float& NumOfWeeks)
{
    NumOfDays = NumOfHours / 24;
    NumOfWeeks = NumOfDays / 7;
}

void PrintNumOfDayWeek(float NumOfDays, float NumOfWeeks)
{
    cout << endl << "The Number Of Weeks Is: " << NumOfWeeks << endl;
    cout << endl << "The Number Of Days Is: " << NumOfDays << endl;
}

int main()
{
    float NumOfHours = ReadNumOfHours();
    float NumOfDays = 0, NumOfWeeks = 0;
    CalcWeekDay(NumOfHours, NumOfDays, NumOfWeeks);
    PrintNumOfDayWeek(NumOfDays, NumOfWeeks);
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_42 >> Task Duration In Seconds
// Write a program to calculate the task duration in seconds and print it on screen
// >> Give the time duration of a task in the numbers of days, hours, minutes and seconds
// Input >> 2, 4, 45, 35
// Output >> 193, 535 Seconds

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Num = 0;

    do
    {
        cout << Message ;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

struct strDurationTime
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

strDurationTime ReadDurationTime()
{
    strDurationTime DurationTime;
    DurationTime.NumberOfDays = ReadPositiveNumber("Enter Number Of Days : ");
    DurationTime.NumberOfHours = ReadPositiveNumber("Enter Number Of Hours : ");
    DurationTime.NumberOfMinutes = ReadPositiveNumber("Enter Number Of Minutes : ");
    DurationTime.NumberOfSeconds = ReadPositiveNumber("Enter Number Of Seconds : ");

    return DurationTime;
}

int DurationInSeconds(strDurationTime DurationTime)
{
    int TotalDurationInSeconds = 0;

    TotalDurationInSeconds += DurationTime.NumberOfDays * 24 * 60 * 60;
    TotalDurationInSeconds += DurationTime.NumberOfHours * 60 * 60;
    TotalDurationInSeconds += DurationTime.NumberOfMinutes * 60;
    TotalDurationInSeconds += DurationTime.NumberOfSeconds;

    return TotalDurationInSeconds;
}

int main()
{
    cout << "The Task Duration In Seconds: " << DurationInSeconds(ReadDurationTime()) << endl;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_43 >> Seconds to Days Hours Minutes Seconds
// Write a program that inputs the number of seconds and changes it to days, hours, minutes and seconds

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct strTimeChanges
{
    int Days, Hours, Minutes, Seconds;
};

int ReadPositiveNumber(string Message)
{
    int Num = 0;

    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

strTimeChanges TimeChangeSeconds(int TotalSeconds)
{
    strTimeChanges TimeChange;
    const int SecondsPerDays = 24 * 60 * 60;
    const int SecondsPerHours = 60 * 60;
    const int SecondsPerMinutes = 60;

    int Remainder;

    TimeChange.Days = floor(TotalSeconds / SecondsPerDays);
    Remainder = TotalSeconds % SecondsPerDays;

    TimeChange.Hours = floor(TotalSeconds / SecondsPerHours);
    Remainder = TotalSeconds % SecondsPerHours;

    TimeChange.Minutes = floor(TotalSeconds / SecondsPerMinutes);
    Remainder = TotalSeconds % SecondsPerMinutes;

    TimeChange.Seconds = Remainder;

    return TimeChange;
}

void PrinTimeChanges(strTimeChanges TimeChanges)
{
    cout << endl << TimeChanges.Days    <<" : "
                 << TimeChanges.Hours   <<" : "
                 << TimeChanges.Minutes <<" : "
                 << TimeChanges.Seconds << endl;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Enter Total Seconds : ");
    PrinTimeChanges(TimeChangeSeconds(TotalSeconds));
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================
