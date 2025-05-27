//Problem_3 >> Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even

namespace Contrling_Flow
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Your Number : ");
            int Number = int.Parse(Console.ReadLine());

            if (Number % 2 == 1)
            {
                Console.WriteLine($"{Number} Is ODD");
            }
            else if (Number == 0 )
            {
                Console.WriteLine("Zero is Neither ODD or EVEN.");
            }

            else
            {
                Console.WriteLine($"{Number} Is EVEN");
            }
        }
    }
}
