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

