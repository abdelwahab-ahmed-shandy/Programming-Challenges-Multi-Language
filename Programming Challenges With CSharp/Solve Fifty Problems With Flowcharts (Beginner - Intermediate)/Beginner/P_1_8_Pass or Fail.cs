/*
Problem_8 >>Write a program to ask the user to enter : Mark 
Then print the "PASS" if mark >= 50 , Otherwise print "Fail"

 */


namespace PracticalExample
{
    internal class Program
    {
        public static double ReadMarkStudent()
        {
            Console.WriteLine("Write a program to ask the user to enter : Mark Then print the PASS if mark >= 50 , Otherwise print Fail");
            Console.Write("Enter Your Number :");
            int Mark = int.Parse(Console.ReadLine());
            return Mark;
        }

        public static string CheckPassFail(double Mark)
        {
            if (Mark >= 50)
                return "PASS";
            return "Fail";
        }

        public static void PrintMarkStudent(double CheckMark)
        {
            Console.WriteLine($"\nYou Are : {CheckPassFail(CheckMark)}");
        }


        static void Main(string[] args)
        {
            PrintMarkStudent(ReadMarkStudent());
        }
    }
}