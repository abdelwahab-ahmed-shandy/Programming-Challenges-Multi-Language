/*
 
Problem_36 >> Simple Calculator 
Write a program to ask the user to enter :
- Number1 , Number2 , Operation Type 
Then perform the calculation according to the operation type as follows :
- "+" add the two numbers.
- "-" subtract the two numbers.
- "*" multiply the two numbers.
- "/" devide the two numbers.
input >> 10 , 20 , *
output>> 200

 */

namespace ConsoleApp1
{
    public class Program
    {
        public enum enTypeOperators
        {
            Add,
            Subtract,
            Multiply,
            Divide
        }
        public static double ReadNumber(string Massage)
        {
            double Number = 0;
            Console.Write(Massage);
            Number = Convert.ToDouble(Console.ReadLine());
            return Number;
        }
        public static enTypeOperators ReadTypeOperators()
        {
            char charTypeOperators;
            Console.Write("Enter Type Operators between ( + , - , * , / ) : ");
            charTypeOperators = Convert.ToChar(Console.ReadLine());

            switch (charTypeOperators)
            {
                case '+':
                    return enTypeOperators.Add;
                case '-':
                    return enTypeOperators.Subtract;
                case '*':
                    return enTypeOperators.Multiply;
                case '/':
                    return enTypeOperators.Divide;
                default:
                    Console.WriteLine("Invalid Type Operators , Defult Is ADD....");
                    return enTypeOperators.Add;
            }
        }

        public static double CalculateNumbers(double NumberOne, double NumberTwo, enTypeOperators TypeOperators)
        {
            double Result = 0;
            switch (TypeOperators)
            {
                case enTypeOperators.Add:
                    Result = NumberOne + NumberTwo;
                    break;
                case enTypeOperators.Subtract:
                    Result = NumberOne - NumberTwo;
                    break;
                case enTypeOperators.Multiply:
                    Result = NumberOne * NumberTwo;
                    break;
                case enTypeOperators.Divide:
                    if (NumberTwo == 0)
                    {
                        Console.WriteLine("Invalid Operation, Can't Divide By Zero....");
                        return 0;
                    }
                    Result = NumberOne / NumberTwo;
                    break;
            }
            return Result;
        }


        static void Main(string[] args)
        {
            Console.WriteLine("Simple Calculator ??");

            double NumberOne = ReadNumber("Enter Number One : ");
            double NumberTwo = ReadNumber("Enter Number Two : ");

            enTypeOperators charTypeOperator = ReadTypeOperators();

            Console.WriteLine($"Result = {CalculateNumbers(NumberOne, NumberTwo, charTypeOperator)}");

        }
    }
}
