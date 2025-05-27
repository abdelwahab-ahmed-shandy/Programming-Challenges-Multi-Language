/*
Problem_3 >> Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even
*/
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace Any_Tasks
{
    internal class Program
    {
        static void PrintAskNum()
        {
            Console.WriteLine("=============================");
            Console.WriteLine("Enter A Positive Number , I Can Check 'ODD' or 'EVEN' : ");
            Console.WriteLine("=============================");
        }
        static int ReadPositiveNumber()
        {
            int PositiveNumber = 0;
            do
            {
                PrintAskNum();
                PositiveNumber = int.Parse(Console.ReadLine()) ;
            } while (PositiveNumber <= 0 );
            return PositiveNumber;
        }
        enum enTypeNumber { ODD = 1, Even = 2}

        static enTypeNumber CheckNumType(int PositiveNumber)
        {
            if (PositiveNumber % 2 ==0)
                return enTypeNumber.Even;
            else 
                return enTypeNumber.ODD;
        }
        static void PrintCheckNumber(enTypeNumber CheckNumType)
        {
            if (CheckNumType == enTypeNumber.Even)
                Console.WriteLine("The Number is Even");
            else
                Console.WriteLine("The Number is ODD");
        }

        static void Main(string[] args)
        {
            int PositiveNumber = ReadPositiveNumber();
            enTypeNumber Type = CheckNumType(PositiveNumber);
            PrintCheckNumber(Type);
        }
    }
}
