/*
(( For Loop ))

Write a C# Sharp program to display the cube of an integer up to given number.
Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
Number is : 4 and cube of the 4 is :64
Number is : 5 and cube of the 5 is :125
 */
namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Enter Stop Display The Cube Number : ");
            int EnterNumber = int.Parse(Console.ReadLine());

            for (int i = 1; i <= EnterNumber; i++)
            {
                Console.WriteLine($"Number is : {i} and cube of the {i} is :{i * i * i}");
            }
        }
    }
}
