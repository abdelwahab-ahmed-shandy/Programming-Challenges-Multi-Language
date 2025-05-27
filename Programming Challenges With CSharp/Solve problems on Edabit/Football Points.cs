/*
Football Points
Create a function that takes the number of wins, draws and losses and calculates the number of points a football team has obtained so far.

wins get 3 points
draws get 1 point
losses get 0 points

Examples

FootballPoints(3, 4, 2) ➞ 13

FootballPoints(5, 0, 2) ➞ 15

FootballPoints(0, 0, 1) ➞ 0

*/

// Solution Code :

namespace Anny
{
    internal class Program
    {
        public static int FootballPoints(int wins, int draws, int losses)
        {
            return (wins * 3) + (draws) + (losses * 0);

        }
        static void Main(string[] args)
        {
            Console.WriteLine(FootballPoints(3, 4, 2));
            Console.WriteLine(FootballPoints(5, 0, 2));
            Console.WriteLine(FootballPoints(0, 0, 1));
        }
    }
}
