/*
Convert Number to Corresponding Month Name
Create a function that takes a number (from 1 to 12) and returns its corresponding month name as a string. For example, if you're given 3 as input, your function should return "March", because March is the 3rd month.

Number	Month Name
1	January
2	February
3	March
4	April
5	May
6	June
7	July
8	August
9	September
10	October
11	November
12	December

Examples
MonthName(3) ➞ "March"

MonthName(12) ➞ "December"

MonthName(6) ➞ "June"

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static string MonthName(int num)
        {
            switch (num)
            {
                case 1:
                    return "January";
                case 2:
                    return "February";
                case 3:
                    return "March";
                case 4:
                    return "April";
                case 5:
                    return "May";
                case 6:
                    return "June";
                case 7:
                    return "July";
                case 8:
                    return "August";
                case 9:
                    return "September";
                case 10:
                    return "October";
                case 11:
                    return "November";
                case 12:
                    return "December";
                default:
                    return "Not Found You can Enter Number Of Month 1 : 12 .";
            }
        }
            static void Main(string[] args)
            {
                Console.WriteLine(MonthName(3));
                Console.WriteLine(MonthName(12));
                Console.WriteLine(MonthName(6));
                Console.WriteLine(MonthName(0));
            }
        }
    }
