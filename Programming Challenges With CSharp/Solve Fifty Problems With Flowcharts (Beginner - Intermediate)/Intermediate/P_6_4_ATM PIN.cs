/*

Problem_49 >> ATM PIN
Write a program to read the ATM PIN code from the user, Then check if PIN code = 1234 , Then show the balance to user , otherwise print " Wong PIN " and ask the user to enter the PIN again 
Assume User Balance is 7500
Input >> 1234     5151 
Output >> Your Balance is : 7500
Wrong PIN  

*/
namespace Solve
{
    internal class Program
    {
        public static string ReadPin()
        {
            string PinCode;
            Console.WriteLine("Enter Pin Code : ");
            PinCode = Console.ReadLine();

            return PinCode;
        }

        public static bool Login()
        {
            string PinCode;
            do
            {
                PinCode = ReadPin();

                if (PinCode == "1234")
                {
                    return true;
                }
                else
                {
                    Console.WriteLine("\nWrong Pin Code\n");
                }

            } while (PinCode != "1234");

            return false;
        }


        static void Main(string[] args)
        {
            if(Login())
            {
                Console.WriteLine("Your Balance is : 7500");
            }
        }
    }
}
