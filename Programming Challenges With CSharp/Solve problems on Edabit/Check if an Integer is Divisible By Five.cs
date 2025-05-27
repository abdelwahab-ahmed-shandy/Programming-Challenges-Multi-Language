/*
Check if an Integer is Divisible By Five

Create a function that returns true if an integer is evenly divisible by 5, and false otherwise.

Examples
divisibleByFive(5) ➞ true

divisibleByFive(-55) ➞ true

divisibleByFive(37) ➞ false

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static bool divisibleByFive(int n)
        {
            if (n % 5 == 0) 
                return true;
            return false;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(divisibleByFive(5));
            Console.WriteLine(divisibleByFive(-55));
            Console.WriteLine(divisibleByFive(37));
        }
    }
}
