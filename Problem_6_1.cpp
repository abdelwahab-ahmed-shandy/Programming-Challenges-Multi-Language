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
