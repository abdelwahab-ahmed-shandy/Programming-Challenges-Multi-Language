/*
(( For Loop ))

Write a C# Sharp program that displays the sum of n natural numbers.
Test Data : 7
Expected Output :
The first 7 natural number is :
1 2 3 4 5 6 7
The Sum of Natural Number upto 7 terms : 28
 */
namespace Any_Tasks
{
    internal class Program
    {
        static void PrintAndSumNumbers(int EnterNumber)
        {
            int Sum = 0;
            Console.Write($"The First {EnterNumber} Natural Number is : ");
            for (int i = 1; i <= EnterNumber ; i++)
            {
                Console.Write($"{i} ");
                Sum = Sum + i ;
            }
            Console.WriteLine($"\nThe Sum Of Natural Number Upto {EnterNumber} Terms : {Sum}");
        }
        static void Main(string[] args)
        {
            Console.Write("Enter Any Numbers : ");
            int EnterNumber = int.Parse(Console.ReadLine());
            PrintAndSumNumbers(EnterNumber);
        }
    }
}
