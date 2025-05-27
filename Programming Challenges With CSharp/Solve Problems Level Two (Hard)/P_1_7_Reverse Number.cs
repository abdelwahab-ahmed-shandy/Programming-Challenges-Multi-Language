/*
Problem_07 >> Write a Program to read a number and print it reverse
Reverse Number 
input>> 1234

output>>4321

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

        public static int GetReverseNumber(int Number)
        {
            int Reminder = 0;
            int reverseNumber = 0;
            while (Number != 0)
            {
                Reminder = Number % 10;
                Number = Number / 10;
                reverseNumber = reverseNumber * 10 + Reminder;
            }
            return reverseNumber;
        }
        public static void PrintReverseNum(int reverseNumber)
        {
            Console.WriteLine($"The Reverse Number is : {reverseNumber}");
        }
        static void Main(string[] args)
        {
            PrintReverseNum(GetReverseNumber(ReadPositiveNumber("Please enter a positive number : ")));
        }
    }
}
