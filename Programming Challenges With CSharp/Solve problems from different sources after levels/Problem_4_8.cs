/*
(( For Loop ))

Write a program in C# Sharp to display the multiplication table of a given integer.

Test Data :
Input the number (Table to be calculated) : 15
Expected Output :
15 X 1 = 15
...
...
15 X 12 = 180
*/
namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Table to be Calculated : ");
            int EnterNumber = int.Parse(Console.ReadLine());

            for (int i = 1; i <= 12; i++)
            {
                Console.WriteLine($"{EnterNumber} X {i} = {EnterNumber*i} ");
            }
        }
    }
}
