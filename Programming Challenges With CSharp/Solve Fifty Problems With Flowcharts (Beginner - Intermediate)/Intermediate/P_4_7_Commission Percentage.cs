/*
 
Problem_34 >> Commission Percentage 
Write a program to ask the user to enter : Total sales
- The commission is calculate as one percentage * the total sales amount , all you need is to decide which percentage to use of the following : 
> 1000,000 --> Percentage is 1%
> 500K to 1M  --> Percentage is 2%
> 100K - 500K --> Percentage is 3%
> 50K to 100K --> Percentage is 5%
> otherwise --> Percentage is 0%
Input >> 110,000
Output >> 3,300
 */

using System.Diagnostics;
using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static double ReadTotalSalesNumber()
        {
            Console.Write("Enter TotalSales : ");
            while (true)
            {
                double TotalSales = Convert.ToInt32(Console.ReadLine());
                if(TotalSales >= 0)
                    return TotalSales;
                    Console.WriteLine("Please Enter Positive TotalSales");
            }
        }
        public static double CommissionSalse(double TotalSales)
        {
            if (TotalSales >= 1_000_000_0)
                return 0.01;
            else if (TotalSales >= 5_000_00)
                return 0.02;
            else if (TotalSales >= 1_000_00)
                return 0.03;
            else if (TotalSales >= 5_000_0)
                return 0.05;
            else
                return 0.00;
        }

        public static double CalcuCommissionPercentage(double TotalSales)
        {
            return CommissionSalse(TotalSales) * TotalSales;
        }

        public static void PrintCommissionPercentage(double TotalSales)
        {
            Console.WriteLine($"Commission Percentage : {CommissionSalse(TotalSales)}");
            Console.WriteLine($"Total Commission  : {CalcuCommissionPercentage(TotalSales)}");
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Commission Percentage ?? ");
            double total = ReadTotalSalesNumber();
            PrintCommissionPercentage(total);

        }
    }
}
