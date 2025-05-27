/*
 
Problem_37 >> Sum Until-99
Write a program to read numbers from user and sum them , keep reading unit the user enters -99 then print the Sum on screen 
input >> 10 , 20 , 30 , 40 , -99
output >>100
#This means that the program continues to receive numbers and adds them to the number before it, until it reaches the number (-99).

 */

namespace ConsoleApp1
{
    public class Program
    {
        public static double ReadNumbers(string Massage)
        {
            double Number = 0;
            Console.Write(Massage);
            Number = Convert.ToDouble(Console.ReadLine());
            return Number;
        }
        public static double SumNumbers()
        {
            double Sum = 0;
            double Number = 0;
            double Counter = 0;
            do
            {
                Number = ReadNumbers("ADD Number : ");
                if (Number == -99)
                {
                    break;
                }
                Sum = Sum + Number;
                Counter++;
            } while (Number != -99);
            return Sum;
        }

        static void Main(string[] args)
        {
            Console.WriteLine(" Sum Until-99 ??");

            Console.WriteLine($"Result {SumNumbers()}");
        }
    }
}
