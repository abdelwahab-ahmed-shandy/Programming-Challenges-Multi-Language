/*
 * Sum of 2 Arrays to a third one
 * Problem_30: Write a program to fill array 2 arrays with max size 100 with random
 * numbers from 1 to 100 
 * sum their elements in a third array and print the results.
 *
 * Input : 10
 *
 * Output :
 * 
 * How many elements ?
 * 
 * 10
 * 
 * Array 1 elements:
 * 37 96 16 67 26 88 90 79 61 54
 * 
 * Array 2 elements:
 * 29 15 95 43 8 55 55 23 29 68
 * 
 * Sum of array1 and array2 elements:
 * 66 111 111 110 34 143 145 102 90 122
 * 
*/

#include <iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	
	int arr[100], arr2[100], arrSum[100];

	int arrLength = ReadPositiveNumber("How many elements ?\n");
	
	FillArrayWithRandomNumbers(arr, arrLength);
	
	FillArrayWithRandomNumbers(arr2, arrLength);
	
	SumOf2Arrays(arr, arr2, arrSum, arrLength);
	cout << "\nArray 1 elements:\n";
	
	PrintArray(arr, arrLength);
	cout << "\nArray 2 elements:\n";
	
	PrintArray(arr2, arrLength);
	cout << "\nSum of array1 and array2 elements:\n";
	
	PrintArray(arrSum, arrLength);
	return 0;
}


