/*

Problem_01 >> 
Write A Program print the Multiplication Table From  1 to as 10 :

*/
namespace Solve
{
    internal class Program
    {
        public static void PrintHeadProgramm()
        {
            Console.WriteLine("\n\t\t\tMultiplication Table 1 to 10 \t\t\t\n");
            for (int j = 1; j <= 10; j++)
            {
                Console.Write($"\t{j}");
            }
            Console.WriteLine("");
            Console.WriteLine("-------------------------------------------------------------------------------------------");
            Console.WriteLine("");
        }
        public static string space(int i)
        {
            if (i < 10)
                return "    ";
            else if (i < 100)
                return "   ";
            else
                return "  ";
        }
        public static void PrintTable()
        {
            for (int i = 1; i <= 10; i++)
            {
                Console.Write($"{i}");
                for (int j = 1; j <= 10; j++)
                {
                    Console.Write($"{space(i * j)} {i * j}");
                }
                Console.WriteLine("");
            }
        }

        static void Main(string[] args)
        {
            PrintHeadProgramm();
            PrintTable();
        }
    }
}
