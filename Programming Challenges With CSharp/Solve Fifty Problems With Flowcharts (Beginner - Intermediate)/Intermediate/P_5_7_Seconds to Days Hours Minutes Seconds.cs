/*

Problem_43 >> Seconds to Days Hours Minutes Seconds
Write a program that inputs the number of seconds and changes it to days , hours , minutes and seconds 
Input >> 10000 
Output >> 0:2:46:40

*/
namespace Solve
{
    class TimeChanges
    {
        public int Days;
        public int Hours;
        public int Minutes;
        public int Seconds;
    }

    internal class Program
    {
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

        public static TimeChanges TimeChangeSeconds(int totalSeconds)
        {
            TimeChanges TimeChange = new ();
            int remainder = 0;

            const int secondsPerDays = 24 * 60 * 60;
            const int secondsPerHours = 60 * 60;
            const int secondsPerMinutes = 60;

            TimeChange.Days = totalSeconds / secondsPerDays;
            remainder = totalSeconds % secondsPerDays;

            TimeChange.Hours = remainder / secondsPerHours;
            remainder %= secondsPerHours;

            TimeChange.Minutes = remainder / secondsPerMinutes;

            TimeChange.Seconds = remainder % secondsPerMinutes;

            return TimeChange;
        }

        public static void printTimeChanges(TimeChanges TimeChange)
        {
            Console.WriteLine(TimeChange.Days + ":" + TimeChange.Hours + ":" + TimeChange.Minutes + ":" + TimeChange.Seconds);
        }
        static void Main(string[] args)
        {
            int totalSeconds = readPositiveNumber("Enter The Total Seconds : ");
            printTimeChanges(TimeChangeSeconds(totalSeconds));
        }
    }
}
