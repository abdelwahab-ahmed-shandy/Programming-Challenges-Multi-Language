/*

Problem_47 >> Loan Installment Months 
Write a program to read a LoanAmount and MonthlyPayment and Calculate how many months you needs to settle the loan.
input >> 5000 $ , 500 M
Output >> 10 Months

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

        public static double CalculateLoanInstallment(double loanAmount, double monthlyPayment)
        {
            return Math.Ceiling(loanAmount / monthlyPayment);
        }
        public static void PrintResult(double months)
        {
            Console.WriteLine($"You need {months} months ");
        }

        static void Main(string[] args)
        {
            double loanAmount = ReadLoanInstallment("Enter Loan Amount: ");
            double monthlyPayment = ReadLoanInstallment("Enter Monthly Payment: ");
            double months = CalculateLoanInstallment(loanAmount, monthlyPayment);
            PrintResult(months);
        }
    }
}
