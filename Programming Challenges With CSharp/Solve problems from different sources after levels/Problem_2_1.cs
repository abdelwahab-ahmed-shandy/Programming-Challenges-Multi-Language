/*
Write a C# Sharp program to compute the sum of the two numerical values. 
If the two values are the same, return triple their sum.
*/

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Number One : ");
            int Number1 = int.Parse(Console.ReadLine());
            Console.Write("Enter Number Two : ");
            int Number2 = int.Parse(Console.ReadLine());

            if (Number1 == Number2)
            {
                Console.WriteLine($"Since the two values ​​are equal, we will return three times their sum ({Number1} + {Number2}) * 3 =  { (Number1 + Number2) * 3}");
            }
            else
            {
                Console.WriteLine($"Since the two values ​​are not equal, then {Number1} + {Number2} = {Number1+Number2} ");
            }
        }
    }
}
