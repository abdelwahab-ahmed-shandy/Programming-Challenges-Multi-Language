/*
 Create a program that helps Ahmed decide whether to wear a jacket or not??

Given:
Constant temperature: 22
Wind speed: 25

The program will tell Ahmed if true >> wear a jacket
If false >> don't wear a jacket
It will print True if the temperature and wind speed are less than the wind speed and constant temperature,
and it will print False if the opposite is true
*/
namespace Any_Tasks
{
    internal class Program
    {
        static void Main(string[] args)
        {

            const int WindSpeed = 25;
            const int Temperature = 22;
            int EnterWindSpeed = 0, EnterTemperature = 0;
            
            Console.Write("Enter Speed Wined : ");
            EnterWindSpeed = int.Parse(Console.ReadLine());

            Console.Write("Enter Temperature : ");
            EnterTemperature = int.Parse(Console.ReadLine());

            Console.WriteLine(EnterWindSpeed < WindSpeed || EnterTemperature < Temperature);
        }
    }
}
