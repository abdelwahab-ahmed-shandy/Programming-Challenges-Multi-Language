/*

Problem_42 >> Task Duration In Seconds 
Write a program to calculate the task duration in seconds and print it on screen 
>> Give the time duration of a task in the numbers of days,hours,minutes and seconds 
Input >> 2 , 4 , 45 , 35 
Output>> 189,935 Seconds

*/
namespace Solve
{
    class DurationTimes
    {
        public int NumberOfDays;
        public int NumberOfHours;
        public int NumberOfMinutes;
        public int NumberOfSeconds;
    }

    internal class Program
    {
        public static int ReadPositiveNumber(string message)
        {
            int number;
            Console.WriteLine(message);
            while (!int.TryParse(Console.ReadLine(), out number) || number < 0)
            {
                Console.WriteLine("Invalid input. Please enter a positive number.");
                Console.WriteLine(message);
            }
            return number;
        }

        public static DurationTimes ReadDurationTime()
        {
            DurationTimes durationTime = new DurationTimes();

            durationTime.NumberOfDays = ReadPositiveNumber("Enter Number Of Days: ");
            durationTime.NumberOfHours = ReadPositiveNumber("Enter Number Of Hours: ");
            durationTime.NumberOfMinutes = ReadPositiveNumber("Enter Number Of Minutes: ");
            durationTime.NumberOfSeconds = ReadPositiveNumber("Enter Number Of Seconds: ");
           
            return durationTime;
        }

        public static int DurationInSeconds(DurationTimes durationTime)
        {
            int totalDurationInSeconds = 0;

            totalDurationInSeconds += durationTime.NumberOfDays * 24 * 60 * 60;
            totalDurationInSeconds += durationTime.NumberOfHours * 60 * 60;
            totalDurationInSeconds += durationTime.NumberOfMinutes * 60;
            totalDurationInSeconds += durationTime.NumberOfSeconds;
           
            return totalDurationInSeconds;
        }

        static void Main(string[] args)
        {
            DurationTimes taskDuration = ReadDurationTime();
            int totalSeconds = DurationInSeconds(taskDuration);
            Console.WriteLine($"The Task Duration In Seconds: {totalSeconds}");
        }
    }
}
