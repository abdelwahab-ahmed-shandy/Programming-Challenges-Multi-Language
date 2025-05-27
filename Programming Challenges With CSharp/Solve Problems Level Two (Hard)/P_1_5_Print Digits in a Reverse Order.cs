/*
Problem_05 >> Write a Program to read a number and print it in a reverse order.
Print Digits in a Reverse Order
input>> 1234

output>>
4
3
2
1

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

        public static void PrintDigitsInReverseOrder(int Number)
        {
            int Reminder = 0;
            while (Number != 0)
            {
                Reminder = Number % 10;
                Number = Number / 10;
                Console.WriteLine(Reminder);
            }
        }
        static void Main(string[] args)
        {
            PrintDigitsInReverseOrder(ReadPositiveNumber("Please enter a positive number : "));
        }
    }
}
