/*

Problem_41 >> Weeks and Days  
Write a program to read a NumberOfHours and calculate the number of weeks and days included in that number  

*/
using System.ComponentModel;

namespace Solve
{
    internal class Program
    {
        public static double ReadNumOfHours()
        {
            double NumOfHours = 0;
            Console.WriteLine("Enter The Number Of Hours: ");
            while (!double.TryParse(Console.ReadLine(),out NumOfHours) || NumOfHours < 0 )
            {
                Console.WriteLine("Invalid input. Please enter a positive number....");
                Console.WriteLine("Enter The Number Of Hours: ");
            }
            return NumOfHours;
        }

        public static void CalculateWeeksAndDays(double TotalHours, out int Weeks, out int Days)
        {
            int totalDays = (int)(TotalHours / 24);
            Weeks = totalDays / 7;
            Days = totalDays % 7;                    
        }

        public static void PrintWeeksAndDays(int Weeks, int Days)
        {
            Console.WriteLine($"The Number Of Weeks Is: {Weeks}");
            Console.WriteLine($"The Number Of Remaining Days Is: {Days}");
        }

        static void Main(string[] args)
        {
            double totalHours = ReadNumOfHours();
            int Weeks, Days;
            CalculateWeeksAndDays(totalHours, out Weeks, out Days);
            PrintWeeksAndDays(Weeks, Days);
        }
    }
}
