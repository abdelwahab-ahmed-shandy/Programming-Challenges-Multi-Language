/*
(( For Loop ))

Write a C# Sharp program to find the sum of the first 10 natural numbers.
Expected Output :
The first 10 natural number is :
1 2 3 4 5 6 7 8 9 10
The Sum is : 55
 */
namespace Any_Tasks
{
    internal class Program
    {
        static void PrintSumNumbersOneToTen()
        {
            int Sum = 0;
            for (int i = 1; i <= 10; i++)
            {
                Sum = Sum + i ;
            }
            Console.WriteLine("===============================================");
            Console.WriteLine($"Sum Of The First 10 Natural Numbers : {Sum}");
            Console.WriteLine("===============================================");
        }
        static void Main(string[] args)
        {
            PrintSumNumbersOneToTen();
        }
    }
}
