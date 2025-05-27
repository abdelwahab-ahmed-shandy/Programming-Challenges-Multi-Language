/*

Problem_46 >> Print Letter From a to z
Write a program to print all letters from A to Z 
output >> a b c d ....... z

*/
namespace Solve
{
    internal class Program
    {
        public static void PrintAToZ()
        {
            for (int i =65; i <= 90; i++)
            {
                Console.WriteLine((char)i);
            }
        }

        static void Main(string[] args)
        {
            PrintAToZ();
        }
    }
}
 
