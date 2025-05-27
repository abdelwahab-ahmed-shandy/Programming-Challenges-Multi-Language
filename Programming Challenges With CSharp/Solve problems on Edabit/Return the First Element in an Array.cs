/*
Return the First Element in an Array

Create a function that takes an array containing only values of the same type and return the first element.

Examples
GetFirstValue([5, 6, 7]) ➞ 5

GetFirstValue(["Semiramis", "Gaia", "Hypatia"]) ➞ "Semiramis"

GetFirstValue([true, false, true]) ➞ true

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static object GetFirstValue(object[] arr)
        {
            return arr[0];
        }
        static void Main(string[] args)
        {
            Console.WriteLine(GetFirstValue([5, 6, 7]));
            Console.WriteLine(GetFirstValue(["Semiramis", "Gaia", "Hypatia"]));
            Console.WriteLine(GetFirstValue([true, false, true]));
        }
    }
}
