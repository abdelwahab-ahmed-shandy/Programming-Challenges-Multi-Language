/*
Problem_40 >> Sevice Fee and Salse Tax 
Write a program to read a BillValue and add Service fee and salse tax tax to it , and print the totalbill on the screen 
- A Resturant charge 10% services fee and 16% salse Tax 
*/
using System.ComponentModel;

namespace Solve
{
    internal class Program
    {
        public static double ReadBillValue()
        {
            double BillValue = 0;
            Console.Write("Enter The Bill Value: ");
            while (!double.TryParse(Console.ReadLine(), out BillValue) || BillValue <= 0)
            {
                Console.WriteLine("Invalid input. Please enter a positive number for the bill value.");
                Console.Write("Enter The Bill Value: ");
            }
            return BillValue;
        }

        public static double CalcuTotalBill(double BillValue)
        {
            double TotalBill = BillValue * 1.1; // Adding service fee (10%)
            TotalBill = TotalBill * 1.16;       // Adding sales tax (16%)
            return TotalBill;
        }

        public static void PrintTotalBill(double TotalBill)
        {
            Console.WriteLine($"The Total Bill Is: {TotalBill:F2}");
        }

        static void Main(string[] args)
        {
            PrintTotalBill(CalcuTotalBill(ReadBillValue()));
        }
    }
}
