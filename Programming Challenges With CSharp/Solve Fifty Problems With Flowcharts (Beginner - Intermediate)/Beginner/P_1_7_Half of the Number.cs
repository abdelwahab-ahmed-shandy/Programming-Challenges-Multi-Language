/*

Problem_7 >>Write a program to ask the user to enter : Number 
Then print the "Half of the <Number> is <???>"
 */


namespace PracticalExample
{
    internal class Program
    {
        public static double ReadNumber()
        {
            Console.WriteLine("Write a program to ask the user to enter : Number  , Then print the Half of the <Number> is < ? ? ? >");
            Console.Write("Enter Your Number :");
            int EnterNumber = int.Parse(Console.ReadLine());
            return EnterNumber;
        }

        public static double GetHalfNum(double HalfNumber)
        {
            return HalfNumber / 2;
        }

        public static void PrintHalfNumber(double Number)
        {
            Console.WriteLine($"\nHalf Number of the {Number} Is {GetHalfNum(Number)}");
        }


        static void Main(string[] args)
        {
            PrintHalfNumber(ReadNumber());
        }
    }
}