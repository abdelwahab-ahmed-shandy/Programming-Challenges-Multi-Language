/*

Problem_45 >> Month Of year 
Write a program to ask the user to enter : Month
Then Print the day as follows:
1 print Jun
2 print Feb
3 print Mar
4 print Apr
5 print May 
6 print June
7 print July 
8 print Aug 
9 print Sep
10 print Oct 
11 print Nov 
12 print December 
- Otherwise print  " Wrong Day " and ask the use to enter the Manth again 
Input >> 11
Output>> Its Nov

*/
namespace Solve
{
    internal class Program
    {
        public enum enMonth
        {
            Jun = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, June = 6,
            July = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
        };

        public static int ReadNumInReange(string Message, int From, int To)
        {
            int Num = 0;
            do
            {
                Console.Write(Message);
                Num = Convert.ToInt32(Console.ReadLine());
            } while (From > Num || Num > To);
            return Num;
        }

        public static enMonth ReadMonthYear()
        {
           return (enMonth)ReadNumInReange("Enter the day of week (1-12): ", 1, 12);
        }
        public static string GetMonth(enMonth month)
        {
            switch (month)
            {
                case enMonth.Jun:
                    return "Its Jun";
                case enMonth.Feb:
                    return "Its Feb";
                case enMonth.Mar:
                    return "Its Mar";
                case enMonth.Apr:
                    return "Its Apr";
                case enMonth.May:
                    return "Its May";
                case enMonth.June:
                    return "Its June";
                case enMonth.July:
                    return "Its July";
                case enMonth.Aug:
                    return "Its Aug";
                case enMonth.Sep:
                    return "Its Sep";
                case enMonth.Oct:
                    return "Its Oct";
                case enMonth.Nov:
                    return "Its Nov";
                case enMonth.Dec:
                    return "Its Dec";
                default:
                    return "Wrong Month";
            }
        }

        static void Main(string[] args)
        {
            enMonth selectedDay = ReadMonthYear();
            Console.WriteLine(GetMonth(selectedDay));
        }
    }
}
