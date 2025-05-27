/*

Problem_50 >> ATM PIN 3 Times 
Write a program to read the ATM PIN code from the user , then check if code = 1234 , then show the balance to user , otherwise print " Wrong PIN " and ask the user to enter  the PIN again 
#Only  allow user to enter the PIN 3 times , if fails , print " Card is locked " 
- Assume user Balance is 7500 
Input >> 1234      5151
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
            int i = 3;
            string PinCode;
            do
            {
                i--;
                PinCode = ReadPin();

                if (PinCode == "1234")
                {
                    return true;
                }
                else
                {
                    Console.WriteLine("\nWrong Pin Code You Have \n" + i + "More try");

                }

            } while (PinCode != "1234" && i >= 1);

            return false;
        }


        static void Main(string[] args)
        {
            if(Login())
            {
                Console.WriteLine("Your Balance is : 7500");
            }
            else
            {
                Console.WriteLine("\nYour Card Blocked Call The Bank For Help \n");
            }
        }
    }
}
