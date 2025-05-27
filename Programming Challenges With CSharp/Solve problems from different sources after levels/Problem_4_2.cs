/*
Write a C# Sharp program to check which number is closest to 100 among two given integers. Return 0 if the two numbers are equal.

Sample Input:
78, 95
95, 95
99, 70

Expected Output:
95
0
99 

*/


namespace All_Problem
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Number One : ");
            int NumberOne = int.Parse(Console.ReadLine());

            Console.Write("Enter Number Two : ");
            int NumberTwo = int.Parse(Console.ReadLine());

            if (NumberOne == NumberTwo)
                Console.WriteLine("0");
            else if (NumberTwo - 100 < NumberOne -100)
                Console.WriteLine($"The Number Closest To 100 Is {NumberOne}");
            else
                Console.WriteLine($"The Number Closest To 100 Is {NumberTwo}");
        }
    }
}
