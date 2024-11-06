//  Problem_34 >> Commission Percentage
//  Write a program to ask the user to enter : Total sales
//  - The commission is calculate as one percentage * the total sales amount, all you need is to decide which percentage to use of the following :
//  > 1000, 000 -- > Percentage is 1 %
//  > 500K to 1M-- > Percentage is 2 %
//  > 100K - 500K-- > Percentage is 3 %
//  > 50K to 100K-- > Percentage is 5 %
//  > otherwise-- > Percentage is 0 %
//  Input >> 110, 000
//  Output >> 3, 300


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadTotalSalse()
{
    float TotalSalse;

    cout << "Enter a Total Sales: ";
    cin >> TotalSalse;
    return TotalSalse;
}

float CommissionSalse(float TotalSalse)
{
    if (TotalSalse >= 1000000)
        return 0.01;
    else if (TotalSalse >= 500000)
        return 0.02;
    else if (TotalSalse >= 100000)
        return 0.03;
    else if (TotalSalse >= 50000)
        return 0.05;
    else
        return 0.00;
}

float CalcuCommissionPercentage(float TotalSalse)
{
    return CommissionSalse(TotalSalse) * TotalSalse;
}

void PrintCommissionPercentage(float TotalSalse)
{
    float commissionRate = CommissionSalse(TotalSalse);
    float totalCommission = CalcuCommissionPercentage(TotalSalse);

    cout << endl << "Commission Percentage = " << commissionRate * 100 << "%" << endl;
    cout << "Total Commission = " << totalCommission << endl;
}

int main()
{
    float totalSales = ReadTotalSalse();
    PrintCommissionPercentage(totalSales);
    return 0;
}

