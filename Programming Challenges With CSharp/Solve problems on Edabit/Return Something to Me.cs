/*
Return Something to Me!
Write a function that returns the string "something" joined with a space " " and the given argument a.
*/

public class Program
{
    public static string GiveMeSomething(string a)
    {
        return $"something {a}";
    }
}

/*
GiveMeSomething("is better than nothing") ➞ "something is better than nothing"

GiveMeSomething("Bob Jane") ➞ "something Bob Jane"

GiveMeSomething("something") ➞ "something something"
 */