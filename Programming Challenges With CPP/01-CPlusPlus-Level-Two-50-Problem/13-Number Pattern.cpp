/*
Problem_13 >> Write a Program to read a number and Print inverted pattern As follows.

Number Pattern

input>> 
5

output>>
5
55
555
5555
55555

*/
using System.Dynamic;

namespace P5_C_
{
    internal class Program
    {
        public static int ReadPositiveNumber(string Massage)
        {
            int PositiveNumber = 0;
            do
            {
                Console.Write(Massage);
                PositiveNumber = Convert.ToInt32(Console.ReadLine());
            } while (PositiveNumber <= 0);
            return PositiveNumber;
        }

        public static void PrintNumPattern(int Number)
        {
            for (int i =0; i <= Number; i++)
            {
                for (int j = 1 ; j <= i; j++)
                {
                    Console.Write(Number);
                }
                Console.WriteLine();
            }
        }
        static void Main(string[] args)
        {
            int Number = ReadPositiveNumber("Please enter a positive number : ");
            PrintNumPattern(Number);
        }
    }
}


#include <iostream>
using namespace std;

int CheckPositiveNumber(string Message)
{
    int Number = 0;
	do
	{
		cout << Message;
		cin  >> Number;
	} while (Number <= 0);
	return Number;
}

void PrintNumberPattern(int Number)
{
	for (int i = 0; i <= Number; i++)
	{
		for (int J = 0 ; J < i ; J++ )
		{
			cout << i;
		}
		cout << endl;
	}
}

int main()
{
	PrintNumberPattern(CheckPositiveNumber("Enter Positive Number : "));
	return 0;
}

