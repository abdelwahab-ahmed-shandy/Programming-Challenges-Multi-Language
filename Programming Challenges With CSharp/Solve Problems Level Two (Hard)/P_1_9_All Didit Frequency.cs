/*
Problem_09 >> Write a Program to read a digit and a number , 
then print All frequency in that number.
All Didit Frequency 
input>> 1223222
        
output>>
Digit 1 frequency is 1 Times
Digit 2 frequency is 5 Times
Digit 3 frequency is 1 Times

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

        public static int GetDiditFrequency(int Numbers , int GetNumFreq)
        {
            int Reminder = 0;
            int FrequncyCount = 0;
            while (Numbers != 0)
            {
                Reminder = Numbers % 10;
                Numbers = Numbers / 10;

                if (GetNumFreq == Reminder)
                {
                    FrequncyCount++;
                }
            }
            return FrequncyCount;
        }
        public static void PrintAllNumOfDigitFrequqncy(int Numbers)
        {
            for(int i = 0; i <= 9; i++ )
            {
                int GetNumFreq = GetDiditFrequency(Numbers , i);
                if (GetNumFreq > 0)
                    Console.WriteLine($"Digit {i} frequency is {GetNumFreq} Times");
            }
        }

        static void Main(string[] args)
        {
            int Numbers = ReadPositiveNumber("Please Enter A Positive Number : ");
            PrintAllNumOfDigitFrequqncy(Numbers);
        }
    }
}
