/*
Absolute Sum
Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.

Examples
GetAbsSum([2, -1, 4, 8, 10]) ➞ 25

GetAbsSum([-3, -4, -10, -2, -3]) ➞ 22

GetAbsSum([2, 4, 6, 8, 10]) ➞ 30

GetAbsSum([-1]) ➞ 1

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static int GetAbsSum(int[] arr)
        {
            int Sum = 0;
            if (arr != null )
            {
                foreach (int i in arr)
                {
                    if (i > 0)
                    {
                        Sum = Sum + i;
                    }
                    else
                    {
                    Sum = Sum + (-i); 
                    }
                }
            }
            return Sum;
        }

        static void Main(string[] args)
            {
                Console.WriteLine(GetAbsSum([2, -1, 4, 8, 10]));
                Console.WriteLine(GetAbsSum([-3, -4, -10, -2, -3]));
                Console.WriteLine(GetAbsSum([2, 4, 6, 8, 10]));
                Console.WriteLine(GetAbsSum([-1]));
            }
     }
}
