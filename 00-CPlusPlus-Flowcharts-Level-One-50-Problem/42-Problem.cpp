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
