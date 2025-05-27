/*

Problem_48 >> Monthy Loan Installment 
Write a program to read a LoanAmount and ask you how many months you need to settle the loan , then calculate the monthly installment amount .
Input >> 5000 , 10 
Output >> 500

*/
namespace Solve
{
    internal class Program
    {
        public static double ReadLoanInstallment(string message)
        {
            double positiveNumber = 0;
            do
            {
                Console.Write(message);
                positiveNumber = Convert.ToDouble(Console.ReadLine());
            }
            while (positiveNumber <= 0);
            return positiveNumber;
        }

        public static double CalculateLoanInstallment(double LoanAmount , double HowManyMonthly)
        {
            return Math.Ceiling(LoanAmount  / HowManyMonthly);
        }
        public static void PrintResult(double months)
        {
            Console.WriteLine($"You need {months} months ");
        }

        static void Main(string[] args)
        {
            double LoanAmount  = ReadLoanInstallment("Enter Loan Amount : ");
            double HowManyMonthly = ReadLoanInstallment("How Many Need A Monthly : ");
            double months = CalculateLoanInstallment(LoanAmount , HowManyMonthly);
            PrintResult(months);
        }
    }
}
