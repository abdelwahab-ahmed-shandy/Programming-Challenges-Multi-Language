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

