/*
Write a C# Sharp program that checks whether one temperature is less than 0 and another is greater than 100.

Sample Input:
120, -1
-1, 120
2, 120

Expected Output:
True
True
False

 */

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter One Temperature : ");
            int OneTemperature = int.Parse(Console.ReadLine());

            Console.Write("Enter One Temperature : ");
            int TwoTemperature = int.Parse(Console.ReadLine());

            string Statement = ((OneTemperature < 0 || OneTemperature > 100) && (TwoTemperature < 0 || TwoTemperature > 100 )? "True" : "False" );
            Console.WriteLine(Statement);
        }
    }
}
