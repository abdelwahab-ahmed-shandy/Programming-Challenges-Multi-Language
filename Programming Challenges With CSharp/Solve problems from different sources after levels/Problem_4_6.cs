/*
(( For Loop ))

Write a C# Sharp program to read 10 numbers and find their average and sum.

Test Data :
Read 10 Numbers And Calculate Sum And Average :
Number - (1) : 2
Number - (2) : 4
Number - (3) : 6
Number - (4) : 8
Number - (5) : 10
Number - (6) : 12
Number - (7) : 14
Number - (8) : 16
Number - (9) : 18
Number - (10) : 20
The sum of 10 no is : 110
The Average is : 11
 */
namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int Sum = 0;
            int ManyNumber = 0;
            int Average = 0;
            Console.WriteLine("Read 10 Numbers And Calculate Sum And Average : ");

            for (int i = 1; i <= 10; i++)
            {
                Console.Write($"Number - ({i}) : ");
                ManyNumber = int.Parse(Console.ReadLine());
                Sum += ManyNumber;
            }

            Console.WriteLine($"The sum of 10 no is : {Sum}");
            Console.WriteLine($"The Average is : {Sum / 10}");
        }
    }
}
