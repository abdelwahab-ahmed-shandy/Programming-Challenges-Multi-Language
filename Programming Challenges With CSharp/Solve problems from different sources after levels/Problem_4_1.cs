/*
Write a C# Sharp program to check the largest number among three given integers.

Sample Input:
1,2,3
1,3,2
1,1,1
1,2,2

Expected Output:
3
3
1
2
 */

namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Number One : ");
            int NumberOne = int.Parse(Console.ReadLine());

            Console.Write("Enter Number Two : ");
            int NumberTwo = int.Parse(Console.ReadLine());

            Console.Write("Enter Number Three : ");
            int NumberThree = int.Parse(Console.ReadLine());


           if (NumberOne > NumberTwo && NumberOne > NumberThree)
                Console.WriteLine($"The Big Number is {NumberOne}");
           else if (NumberTwo > NumberThree)
                Console.WriteLine($"The Big Number is {NumberTwo}");
           else
                Console.WriteLine($"The Big Number is {NumberThree}");
        }
    }
}
