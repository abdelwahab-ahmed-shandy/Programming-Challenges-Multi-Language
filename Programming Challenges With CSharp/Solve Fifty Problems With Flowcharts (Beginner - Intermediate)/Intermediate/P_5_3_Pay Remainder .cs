/*
 
Problem_39 >> Pay Remainder ? 
Write a program to read a totalBill nd cashpaid and calculate the remainder to paid back .

 */

namespace ConsoleApp1
{
    public class Program
    {
        public static double ReadNumbers(string Massage)
        {
            double Number = 0;
            Console.Write(Massage);
            Number = Convert.ToDouble(Console.ReadLine());
            return Number;
        }
        public static double PayRemainder ()
        {
            double CashPaid = ReadNumbers("Enter The Cash Paid : ");
            double TotalBill = ReadNumbers("Enter The Total Bill : ");
            double Remainder = CashPaid - TotalBill;
            return Remainder;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(" Pay Remainder ?  ");

            Console.WriteLine($"The Total Pay Remainder : {PayRemainder()}");
        }
    }
}
