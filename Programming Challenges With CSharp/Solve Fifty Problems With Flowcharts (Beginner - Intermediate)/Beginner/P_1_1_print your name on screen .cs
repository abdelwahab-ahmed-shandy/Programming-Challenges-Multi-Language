/*
  
Problem_1 >> Write a program to print your name on screen 
 
To activate one of the two, you have to comment on one of them.
 */

namespace practcal_example
{
    internal class Program
    {
        public void PrintName(string name)
        {
            Console.WriteLine($"Your Name Is : {name}");
        }
        static void Main(string[] args)
        {
            Program program = new Program();
            program.PrintName("Abdelwahab Shandy");
        }
    }
}
//=======================================================================
// Can Use Static 
/*
 What is the benefit of using static?

Ease of access: No need to create an object, making calling a function faster and simpler.
Lack of dependence on the state of the object: If the function performs an operation that does not depend on the properties of the object, static is the best choice. For example, functions such as arithmetic operations or printing static text.
Reduced memory consumption: An object is not created in memory if it is not needed.

To activate one of the two, you have to comment on one of them.
 */
namespace practcal_example
{
    internal class Program
    {
        public static void PrintName(string name)
        {
            Console.WriteLine($"Your Name Is : {name}");
        }
        static void Main(string[] args)
        {
            PrintName("Abdelwahab Shandy");

        }
    }
}