/*

Problem_44 >> Day of week 
Write a program to ask the user to enter : Day 
Then Print the day as follows:
1 Print Sunday 
2 Print Monday 
3 Print Tuesday
4 Print Wednesday
5 Print Thursday
6 Print Friday 
7 Print Saturday
- Otherwise print  " Wrong Day " and ask the use to enter the day again 
Input >> 6
Output>> Its Friday 

*/
namespace Solve
{
    internal class Program
    {
        public enum enDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

        public static int readPositiveNumber(String massage)
        {
            int posotiveNumber = 0;
            do
            {
                Console.Write(massage);
                posotiveNumber = Convert.ToInt32(Console.ReadLine());
            }
            while (posotiveNumber <= 0 );
            return posotiveNumber;
        }

        public static enDays ReadDayOfWeek()
        {
            int day;
            do
            {
                day = readPositiveNumber("Enter the day of week 1-7 : ");
                if (day < 1 || day > 7)
                {
                    Console.WriteLine("Enter a number between 1 and 7.");
                }
            }
            while (day < 1 || day > 7);
            return (enDays)day;
        }
        public static string DayOfWeek(enDays day)
        {
            switch (day)
            {
                case enDays.Sunday:
                    return "Its Sunday";
                case enDays.Monday:
                    return "Its Monday";
                case enDays.Tuesday:
                    return "Its Tuesday";
                case enDays.Wednesday:
                    return "Its Wednesday";
                case enDays.Thursday:
                    return "Its Thursday";
                case enDays.Friday:
                    return "Its Friday";
                case enDays.Saturday:
                    return "Its Saturday";
                default:
                    return "Wrong Day";
            }
        }


        static void Main(string[] args)
        {
            enDays selectedDay = ReadDayOfWeek();
            Console.WriteLine(DayOfWeek(selectedDay));
        }
    }
}
 
