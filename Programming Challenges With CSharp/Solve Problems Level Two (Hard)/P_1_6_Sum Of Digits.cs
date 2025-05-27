/*
Problem_06 >> Write a Program to read a number and print the sum of its digits.
Sum Of Digits 
input>> 1234

output>>
Sum Of Digits : 10

*/
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

        public static int SumOfDigits(int Number)
        {
            int Reminder = 0;
            int Sum = 0;
            while (Number != 0)
            {
                Reminder = Number % 10;
                Number = Number / 10;
                Sum = Sum + Reminder;
            }
            return Sum;
        }
        public static void PrintResult(int SumNumOfDigits)
        {
            Console.WriteLine($"The Sum Of Digits = {SumNumOfDigits}");
        }
        static void Main(string[] args)
        {
            PrintResult( SumOfDigits(ReadPositiveNumber("Please enter a positive number : ")));
        }
    }
}
