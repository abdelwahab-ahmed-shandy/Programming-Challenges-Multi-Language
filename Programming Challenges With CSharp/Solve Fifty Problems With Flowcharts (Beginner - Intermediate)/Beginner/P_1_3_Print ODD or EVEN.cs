/*

Problem_3 >> Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even

 */

namespace PracticalExample
{
    internal class Program
    {
        public enum enTypeOfNumber { ODD = 1, EVEN = 2 };

        public static int ReadNumber()
        {
            Console.WriteLine("Write a program to ask the user to enter a number, then print ODD if it's odd, or EVEN if it's even");

            while (true)
            {
                Console.Write("Enter a number: ");
                string input = Console.ReadLine();
                if (int.TryParse(input, out int enterNumber))
                {
                    return enterNumber;
                }
                else
                {
                    Console.WriteLine("Error , Try Again");
                }
            }
        }

        public static enTypeOfNumber CheckNumberType(int enterNumber)
        {
            if (enterNumber % 2 == 0)
                return enTypeOfNumber.EVEN;
            else
                return enTypeOfNumber.ODD;
        }

        public static void PrintTypeNumber(enTypeOfNumber resultCheck)
        {
            if (resultCheck == enTypeOfNumber.EVEN)
                Console.WriteLine("\nThe number is EVEN");
            else
                Console.WriteLine("\nThe number is ODD");
        }

        static void Main(string[] args)
        {
            int enterNumber = ReadNumber();
            enTypeOfNumber whatType = CheckNumberType(enterNumber);
            PrintTypeNumber(whatType);
        }
    }
}