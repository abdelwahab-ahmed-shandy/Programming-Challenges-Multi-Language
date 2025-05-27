/*
Write a C# Sharp program to check two given integers whether either of them is in the range 100..200 inclusive.

Sample Input:
100, 199
250, 300
105, 190
Expected Output:

True
False
True

 */

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter One Temperature : ");
            int OneTemperature = int.Parse(Console.ReadLine());

            Console.Write("Enter Two Temperature : ");
            int TwoTemperature = int.Parse(Console.ReadLine());

            string Statement = (OneTemperature >= 100 && OneTemperature <= 200) || (TwoTemperature >= 100 && TwoTemperature <= 200)? "True" : "False" ;
            Console.WriteLine(Statement);
        }
    }
}
