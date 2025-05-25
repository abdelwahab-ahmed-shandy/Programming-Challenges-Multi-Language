/*
 * Sum Of Random Array
 * Problem_26: Write a program to fill array with max size 100 with random numbers from 1 to 100
 * Then Print Sum All Numbers
 * Input : 10
 *
 * Output :
 * Array Elements: 36 84 51 76 8 34 5 18 91 56
 * Mix Number is : 495
*/

#include <iostream>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}

int SumArray(int arr[100], int arrLength)
{
	int Sum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));

	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);

	cout << "\nSum Number is : ";
	cout << SumArray(arr, arrLength) << endl;

	return 0;
}
