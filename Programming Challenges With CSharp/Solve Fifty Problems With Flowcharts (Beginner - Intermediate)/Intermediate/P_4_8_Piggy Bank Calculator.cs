/*
 
Problem_35 >> Piggy Bank Calculator 
Write a program to ask the user to enter:
Pennies , Nickels , Dimes , Quarters , Dollars 
#Then calculate the total pennies , total dollars and print them on screen giving that :
- penny  = 1
- Nickel = 5
- Dime   = 10
- Quarter= 25
- Dollar = 100
Input >> 5,5,5,5,5
Output>> 705 pennies 
         7.05Dollars
 */

using System.Diagnostics;
using System.Drawing;
using System.Numerics;
using static PracticalExample.Program;

namespace PracticalExample
{
    public class Money
    {
        public int Penny;
        public int Nickel;
        public int Dime;
        public int Quarter;
        public int Dollar;
    }

    internal class Program
    {
        public static Money ReadMoney()
        {
            Money money = new Money();
            Console.Write("Enter Total Pennies: ");
            money.Penny = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Total Nickels: ");
            money.Nickel = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Total Dimes: ");
            money.Dime = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Total Quarters: ");
            money.Quarter = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter Total Dollars: ");
            money.Dollar = Convert.ToInt32(Console.ReadLine());

            return money;
        }

        public static int CalculateTotalPennies(Money money)
        {
            int totalPennies = (money.Penny * 1) + (money.Nickel * 5) + (money.Dime * 10) + (money.Quarter * 25) + (money.Dollar * 100);
            return totalPennies;
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Piggy Bank Calculator");
            Money money = ReadMoney(); 
            int totalPennies = CalculateTotalPennies(money);  

            Console.WriteLine($"Total Pennies: {totalPennies} pennies");
            Console.WriteLine($"Total Dollars: {totalPennies / 100:F2} dollars");
        }
    }
}
