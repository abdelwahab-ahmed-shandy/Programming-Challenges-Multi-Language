// Problem_48 >> Monthy Loan Installment 
// Write a program to read a LoanAmount and ask you how many months you need to settle the loan , then calculate the monthly installment amount .

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadLoanInstallment(float &LoanAmount,float & HowManyMonthly)
{
    cout << "How to Loan Amount : ";
    cin >> LoanAmount;
    cout << "How Many Need A Monthly : ";
    cin >> HowManyMonthly;
}
float CalcuLoanInstallment(float LoanAmount, float HowManyMonthly)
{
    return LoanAmount / HowManyMonthly;
}

int main()
{
    float LoanAmount, HowManyMonthly;
    ReadLoanInstallment(LoanAmount, HowManyMonthly);
    cout <<"\nThe Total Monthly Payment is : " << CalcuLoanInstallment(LoanAmount, HowManyMonthly)<<endl ;
    return 0;
}
