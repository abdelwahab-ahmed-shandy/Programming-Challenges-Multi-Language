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
