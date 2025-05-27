/*
 
Problem_9 >>Write a program to ask the user to enter : Number1, Number2, Number3 
Then print the Sum of entered numbers 

 */

namespace PracticalExample
{
    internal class Program
    {
        public static double ReadNumbersAndGetSum(int[] Arry)
        {
            Console.WriteLine("Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers");
            Console.Write("Enter Number One :");
            Arry[0] = int.Parse(Console.ReadLine());

            Console.Write("Enter Number Two :");
            Arry[1] = int.Parse(Console.ReadLine());

            Console.Write("Enter Number Three :");
            Arry[2] = int.Parse(Console.ReadLine());

            double ResultSum = Arry[0] + Arry[1] + Arry[2];
            return ResultSum;
        }
        public static void PrintSumNumbers(double ResultSum)
        {
            Console.WriteLine($"\nThe Sum Numbers Is : {ResultSum}");
        }

        static void Main(string[] args)
        {
            int[] Arry = new int[3];
            PrintSumNumbers(ReadNumbersAndGetSum(Arry));
        }
    }
}