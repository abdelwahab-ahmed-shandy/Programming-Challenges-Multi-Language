/*
Problem_18 >> Write a Program to read a text and encrypt it , decrpt it  

Encrypt-Decrypt text

input>> 
Mohmed

output>>
Text Before Encryption : Abdelwahab
Text After Encryption : Fgijq|fmfg
Text After Decryption : Abdelwahab

*/
using System.Diagnostics.Metrics;
using System.Dynamic;
using static System.Net.Mime.MediaTypeNames;

namespace P5_C_
{
    internal class Program
    {
        public static string readAText(string Massage)
        {
            string readText;
            
            Console.Write(Massage);
            readText = Console.ReadLine();
            
            return readText;
        }

        public static string encrptText(string Text , int Key)
        {
            char[] textArray = Text.ToCharArray();

            for (int i = 0; i < textArray.Length; i++)
            {
                textArray[i] = (char)(textArray[i] + Key);
            }
            return new string(textArray);
        }

        public static string decrptText(string Text, int Key)
        {
            char[] textArray = Text.ToCharArray();

            for (int i = 0; i < textArray.Length; i++)
            {
                textArray[i] = (char)(textArray[i] - Key);
            }
            return new string(textArray);
        }
        static void Main(string[] args)
        {
            const int Key = 5;

            string Text = readAText("Enter a Text : ");
            string TextAfterEncrption = encrptText(Text, Key);
            string TextAfterDecryption = decrptText(TextAfterEncrption, Key);

            // Output
            Console.WriteLine($"Text Before Encryption :   {Text}");
            Console.WriteLine($"The Text After Encryption :    {TextAfterEncrption}");
            Console.WriteLine($"The Text After Decryption : {TextAfterDecryption}");
        }
    }
}
