/*
 * Problem_23: Write a program to fill array with max size 100 with random numbers from 1 to 100 
 * Input : 10
 *
 * Output :
 * Array Elements : 67 55 98 49 12 34 78 90 23 45

*/


#include <iostream>
using namespace std;
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

void GenerateReandomNumber(int ReadNumber, int Min, int Max)
{
	for (int i = 1; i <= ReadNumber; i++)
	{
		cout << Min + rand() % (Max - Min + 1) << " ";
	}
}

int main()
{
	int Number = ReadPositiveNumber("Enter the number of elements in the array");
	cout << "Array Elements : ";
	GenerateReandomNumber(Number, 1, 10);
}

//==================================================================================================
//==================================================================================================
//==================================================================================================

/*
 * Problem_23: Write a program to fill array with max size 100 with random numbers from 1 to 100
 * Input : 10
 *
 * Output :
 * Array Elements : 67 55 98 49 12 34 78 90 23 45
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
int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray Elements: ";
	PrintArray(arr, arrLength);
	return 0;
}
