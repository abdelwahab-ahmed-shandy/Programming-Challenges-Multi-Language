/*
Chef and Instant Noodles
Chef has invented 
1
1-minute Instant Noodles. As the name suggests, each packet takes exactly 
1
1 minute to cook.

Chef's restaurant has 
X
X stoves and only 
1
1 packet can be cooked in a single stove at any minute.

How many customers can Chef serve in 
Y
Y minutes if each customer orders exactly 
1
1 packet of noodles?

Input Format
The first and only line of input contains two space-separated integers 
X
X and 
Y
Y — the number of stoves and the number of minutes, respectively.
Output Format
Print a single integer, the maximum number of customers Chef can serve in 
Y
Y minutes 
 */

using System;

public class Test
{
    public static void Main()
    {
        string[] EnterNumber = Console.ReadLine().Split();
        int NumberOne = int.Parse(EnterNumber[0]);
        int NumberTwo = int.Parse(EnterNumber[1]);
        int Max = NumberOne * NumberTwo;
        Console.WriteLine(Max);
    }
}

// input 3 7 
// ouput 21