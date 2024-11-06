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
