//Problem_2 >> Write a program to ask the user to enter his / hir name and print it on screen

namespace _1to_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Your Name: ");
            string Name = Console.ReadLine();
            Console.WriteLine($"Your Name is : {Name}");
        }
    }
}
