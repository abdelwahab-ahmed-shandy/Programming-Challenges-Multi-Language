/*
Rearrange Code
You want to input two integers, and output their sum.

Rearrange the code given, so that it does the above task.
 */
using System;
namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            int A = Convert.ToInt32(Console.ReadLine());
            int B = Convert.ToInt32(Console.ReadLine());
            int C = A + B;
            Console.WriteLine(C);
        }
    }
}