//Problem_3 >> Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even

using System.Threading.Channels;
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace _1to_6
{
    internal class Program
    {
        static void Main(string[] args)
        {
               
            Console.Write("Enter Your Number : ");
            int Number = Console.Read();
           
            if (Number % 2 == 0)
                Console.WriteLine("This Number is EVEN");
            else
                Console.WriteLine("This Number is ODD");
        }
    }
}
