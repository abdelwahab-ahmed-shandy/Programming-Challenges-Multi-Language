/*

Problem_2 >> Write a program to ask the user to enter his/hir name and print it on screen 

 */

namespace practcal_example
{

    internal class Program
    {
        public static string ReadYourName()
        {
            Console.Write("Enter Your Name : ");
            string Name = Console.ReadLine();
            if (string.IsNullOrWhiteSpace(Name))
                return $"Try Again";
            return Name;
        }

        public static void PrintName(string Name)
        {
            Console.WriteLine($"\nYour Name Is : {Name}");
        }
        static void Main(string[] args)
        {
            PrintName(ReadYourName());
        }
    }
}