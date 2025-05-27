/*
Write a program in C# Sharp to display the multiplication table vertically from 1 to n.
Test Data :
Input upto the table number starting from
Enter Number Starting : 1 
Enter Number Ending: 8
Expected Output :
Multiplication table from 1 to 8
1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
...
1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80
*/
using static System.Runtime.InteropServices.JavaScript.JSType;

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Number Starting : ");
            int EnterNumberStarting = int.Parse(Console.ReadLine());
            Console.Write("Enter Number Starting : ");
            int EnterNumberEnding = int.Parse(Console.ReadLine());

            Console.WriteLine($"\nMultiplication table from {EnterNumberStarting} to {EnterNumberEnding}:\n");

            for (int i = 1; i <= 10; i++) 
            {
                for (int j = EnterNumberStarting; j <= EnterNumberEnding; j++) 
                {
                    Console.Write($"{j} x {i} = {j * i}, ");
                }
                Console.WriteLine();
            }
        }
    }
}
