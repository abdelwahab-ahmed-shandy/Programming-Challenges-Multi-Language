/*
Sum of Polygon Angles
Given an n-sided regular polygon n, return the total sum of internal angles (in degrees).

n will always be greater than 2.
The formula (n - 2) x 180 gives the sum of all the measures of the angles of an n-sided polygon.

*/

public class Program
{
    public static int SumPolygon(int num)
    {
        return (n - 2) * 180;
    }
}

/*
SumPolygon(3) ➞ 180

SumPolygon(4) ➞ 360

SumPolygon(6) ➞ 720
 */