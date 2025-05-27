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
