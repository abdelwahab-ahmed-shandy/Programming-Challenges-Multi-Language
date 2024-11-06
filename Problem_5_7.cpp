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
