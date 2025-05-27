/*
Problem_08 >> Write a Program to read a digit and a number , 
then print digit frequency in that number.
Didit Frequency 
input>> 1223222
        2
output>>
Digit 2 frequency is 5 Times

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

        public static void GetDiditFrequency(int Number , int GetNum)
        {
            int Reminder = 0;
            int FrequncyCount = 0;
            while (Number != 0)
            {
                Reminder = Number % 10;
                Number = Number / 10;

                if (GetNum == Reminder)
                {
                    FrequncyCount++;
                }
            }
            Console.WriteLine($"Digit {GetNum} frequency is {FrequncyCount} Times");
        }

        static void Main(string[] args)
        {
            int Numbers = ReadPositiveNumber("Please Enter A Positive Number : ");
            int GetNumber = ReadPositiveNumber("What Is Get A Number ?! ");

            GetDiditFrequency(Numbers,GetNumber);
        }
    }
}
