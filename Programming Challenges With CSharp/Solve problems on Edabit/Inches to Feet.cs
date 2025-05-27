/*
Inches to Feet
Create a function that accepts a measurement value in inches and returns the equivalent of the measurement value in feet.

Examples
inchesToFeet(324) ➞ 27

inchesToFeet(12) ➞ 1

inchesToFeet(36) ➞ 3

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static int inchesToFeet(int inches)
        {
            if (inches <12)
                return 0;
            return (inches * 1) / 12;

        }
        static void Main(string[] args)
        {
            Console.WriteLine(inchesToFeet(324));
            Console.WriteLine(inchesToFeet(12));
            Console.WriteLine(inchesToFeet(36));
        }
    }
}
