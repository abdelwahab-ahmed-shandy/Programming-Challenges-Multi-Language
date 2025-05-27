/*
(( For Loop ))

Write a program in C# Sharp to display the first 10 natural numbers.
Expected Output :
1 2 3 4 5 6 7 8 9 10
 */
namespace Any_Tasks
{
    internal class Program
    {
        static void PrintNumbersOneToTen()
        {
            for (int i = 1; i <= 10; i++)
            {
                Console.Write($"{i} ");
            }
        }
        static void Main(string[] args)
        {
            PrintNumbersOneToTen();
        }
    }
}
