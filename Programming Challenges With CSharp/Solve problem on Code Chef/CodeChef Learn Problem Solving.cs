/*
CodeChef Learn Problem Solving
In the new CodeChef Learn module, under the "Learn Problem Solving" section, there are two courses for each language. For eg. "Python Beginner - Part 1" and "Python Beginner - Part 2". These courses help you get started with CodeChef contests.

Currently there are courses for 4 languages, and hence there are 8 courses in this section. But suppose there are courses for 
N
N languages, what will be the total number of courses in this section?

Input Format
The only line of input will contain a single integer 
N
N, denoting the number of languages for which there are courses.

Output Format
Output on a single line the total number of courses in the section.
 */

using System;

public class Test
{
    public static void Main()
    {
        const int TwoCourses = 2;
        int ManyModule = int.Parse(Console.ReadLine());
        Console.WriteLine(TwoCourses * ManyModule);
    }
}

// input  ==>> 2
// output ==>> 4