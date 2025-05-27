/*
 Problem_14 >> Swap Numbers 
Write a program to ask the user to user : Number1 . Number2 
-Then print two numbers , then swap the two numbers and print them 

 */

using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadNumbers(ref double Num1 , ref double Num2)
        {
            Console.WriteLine("Problem_14 >> Swap Numbers \r\nWrite a program to ask the user to user : Number1 . Number2 -Then print two numbers , then swap the two numbers and print them \n");
            Console.Write("Enter Number One  : ");
            Num1 = double.Parse(Console.ReadLine());
            Console.Write("Enter Number Two  : ");
            Num2 = double.Parse(Console.ReadLine());
           
        }
        public static void SwapNumber(double A, double B )
        {
            double Swap = 0;
            Swap = A;
            A= B;
            B = Swap;
            Console.WriteLine($"\nThe Number One After : {A} And Number Two is : {B}");
        }

        static void Main(string[] args)
        {
            double NumOne =0 , NumTwo =0 ;
            ReadNumbers(ref NumOne, ref NumTwo);
            //Before Swap
            Console.WriteLine($"The Number One Before : {NumOne} And Number Two is : {NumTwo} ");
            //After Swap
            SwapNumber(NumOne  ,NumTwo);
        }
    }
}
