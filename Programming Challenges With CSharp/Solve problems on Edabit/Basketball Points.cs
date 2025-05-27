/*
Basketball Points
You are counting points for a basketball game, given the amount of 3-pointers scored and 2-pointers scored, find the final points for the team and return that value ([2 -pointers scored, 3-pointers scored]).
*/

public class Program
{
    public static int Points(int twoPointers, int threePointers)
    {
        return (twoPointers * 2) + (threePointers * 3);
    }
}

/*
points(1, 1) ➞ 5

points(7, 5) ➞ 29

points(38, 8) ➞ 100
 */