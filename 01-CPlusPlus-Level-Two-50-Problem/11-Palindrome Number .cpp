/*
Problem_11 >> Write a Program to read a number and check if it is palindrome or not.

Palindrome is a number that reads the same from rigth to left.
Palindrome Number
input>> 
1234
12341

output>>
No , it is Not Palindrome Number
Yes , it is Palindrome Number

*/
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int NumberCheckPositve;
	do
	{
		cout << Message;
		cin >> NumberCheckPositve;

	} while (NumberCheckPositve <= 0 );
	return NumberCheckPositve;
}

enum enPalindromeOrNot { Palindrome  = 1 , NotPalindrome = 2 };

int ReverceNumber(int Number)
{
	int Remainder = 0, ReverceNumber = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		ReverceNumber = ReverceNumber * 10 + Remainder;
	}
	return ReverceNumber;
}

enPalindromeOrNot CheckPalindrome(int Number, int ReverceNumber)
{
	if (Number == ReverceNumber)
		return enPalindromeOrNot::Palindrome;
	else
		return enPalindromeOrNot::NotPalindrome;
}

void PrintPalindromeNumber(int Number)
{
	int Reverce = ReverceNumber(Number);
	if (CheckPalindrome(Number, Reverce) == enPalindromeOrNot::Palindrome)
		cout << "Yes , it is a Palindrome number";
	else
		cout << "No , it is Not a Palindrome number";
}

int main()
{
	int Number = ReadPositiveNumber("Enter Positive Number : ");
	PrintPalindromeNumber(Number);
	return 0;
}

