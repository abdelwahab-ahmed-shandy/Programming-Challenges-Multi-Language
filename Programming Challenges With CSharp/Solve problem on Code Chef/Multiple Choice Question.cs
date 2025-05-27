/*
Multiple Choice Question
What will the following code return as the output if the 1st line of input is 1 and the 2nd line of input is 2?
 */
using System;

namespace MyApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            char[] a = new char[1];
            char[] b = new char[1];
            a[0] = Convert.ToInt32(Console.ReadLine());
            b[0] = Convert.ToInt32(Console.ReadLine());
            int c = a + b;
            Console.WriteLine(c);
        }
    }
}

//Select one of the following options
//==> The code will lead to a compilation error.