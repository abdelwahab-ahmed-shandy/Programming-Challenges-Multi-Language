// Problem_47 >> Loan Installment Months 
// Write a program to read a LoanAmount and MonthlyPayment and Calculate how many months you needs to settle the loan.


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadLoanInstallment(float &LoanAmount,float &MonthlyPayment)
{
    cout << "How to Loan Amount : ";
    cin >> LoanAmount;
    cout << "How to Monthly Payment : ";
    cin >> MonthlyPayment;
}
float CalcuLoanInstallment(float LoanAmount, float MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;
}

int main()
{
    float LoanAmount, MonthlyPayment;
    ReadLoanInstallment(LoanAmount, MonthlyPayment);
    cout <<"\nThe total Month is : " << CalcuLoanInstallment(LoanAmount, MonthlyPayment)<<endl ;
    return 0;
}
