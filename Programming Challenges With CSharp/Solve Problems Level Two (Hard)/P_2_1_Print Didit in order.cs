/*
Problem_10 >> Write a Program to read a digit and print it in order from left to right , 
then print All frequency in that number.
Print Didit in order 
input>> 
1234
        
output>>
1
2
3
4

*/
using System.Dynamic;

namespace P5_C_
{
    internal class Program
    {
        public static int ReadPositiveNumber(string Massage)
        {
            int PositiveNumber = 0;
            do
            {
                Console.Write(Massage);
                PositiveNumber = Convert.ToInt32(Console.ReadLine());
            } while (PositiveNumber <= 0);
            return PositiveNumber;
        }

        public static int PrintDigitsInReverseOrder(int Number)
        {
            int Reminder = 0;
            int ReverseNumber = 0;
            while (Number != 0)
            {
                Reminder = Number % 10;
                Number = Number / 10;
                ReverseNumber = ReverseNumber * 10 + Reminder;
            }
            return ReverseNumber;
        }
        public static void PrintDigits(int Number)
        {
            int Reminder = 0;
            while (Number != 0)
            {
                Reminder = Number % 10;
                Console.WriteLine(Reminder);
                Number = Number / 10;
            }
        }
        static void Main(string[] args)
        {
            int Numbers = ReadPositiveNumber("Please enter a positive number : ");
            
            PrintDigits(PrintDigitsInReverseOrder(Numbers));
        }
    }
}
