/*
Create a program that takes the user's date of birth and calculates his age from the current year.
*/
namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter The Current Year : ");
            int YearNow = int.Parse(Console.ReadLine());

            Console.Write("Enter Your Birth Year  : ");
            int YourYear = int.Parse(Console.ReadLine());

            Console.WriteLine($"Your age until {YearNow} = {YearNow - YourYear} Year ");
        }
    }
}
