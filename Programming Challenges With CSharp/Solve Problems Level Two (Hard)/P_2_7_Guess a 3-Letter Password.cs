/*
Problem_17 >> Write a Program to guess a 3-letter Password (all capital) 

Guess a 3-Letter Password

input>> 
AAF

output>>
Trial[1]:AAA
Trial[2]:AAB
Trial[3]:AAC
Trial[4]:AAD
Trial[5]:AAE
Trial[6]:AAF

*/
using System.Diagnostics.Metrics;
using System.Dynamic;

namespace P5_C_
{
    internal class Program
    {
        public static string readAPassword(string Massage)
        {
            string readPass ;
            
            Console.Write(Massage);
            readPass = Console.ReadLine();
            
            return readPass;
        }

        public static bool guessPassword(string Pass)
        {
            string word = "";
            int count = 0;

            for (char i = 'A'; i <= 'Z'; i++)
            {
                for (char j = 'A'; j <= 'Z'; j++)
                {
                    for (char k = 'A'; k <= 'Z'; k++)
                    {
                        word = i.ToString() + j.ToString() + k.ToString();
                        Console.WriteLine($"Trial[ { count} ]: {word} ");
                        count++;
                        if (word == Pass)
                        {
                            return true;
                        }
                    }
                }
            }
            return false;
        }



        static void Main(string[] args)
        {
            guessPassword(readAPassword("Enter Your Password (3-letter): "));
        }
    }
}
