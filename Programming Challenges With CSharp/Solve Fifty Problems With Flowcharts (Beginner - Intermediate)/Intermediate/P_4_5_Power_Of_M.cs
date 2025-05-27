/*
 
Problem_32 >> Power of M (LOOPS)
Write a program to ask the user to enter : Number , M 
Then print the Number ^ M
input >> 2 , 4
output >> 16 

 */

using System.Drawing;
using System.Numerics;

namespace PracticalExample
{
    internal class Program
    {
        public static void ReadPositiveNumber(ref int Number ,ref int Power)
        {
            Console.Write("Enter Positive Number : ");
            Number = Convert.ToInt32(Console.ReadLine());
            
            Console.Write("Enter The Power 'M' :");
            Power = Convert.ToInt32(Console.ReadLine());
        }

        public static void PrintNumberOfPower(int Number , int Power)
        {
            Console.WriteLine($"\nThe Power {Number} Of {Power} : {Math.Pow(Number,Power)}");

        }
        static void Main(string[] args)
        {
            Console.WriteLine("Write a program to ask the user to enter : Number , M Then print the Number ^ M");
            int Number =0 , Power= 0;
            ReadPositiveNumber(ref Number,ref Power);
            PrintNumberOfPower(Number, Power);        
        }
    }
}
