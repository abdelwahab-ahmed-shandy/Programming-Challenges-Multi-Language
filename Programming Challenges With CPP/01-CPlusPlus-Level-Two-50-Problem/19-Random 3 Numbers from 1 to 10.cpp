// 19 - Random 3 Numbers from 1 to 10
// Write a Program to print 3 random numbers from 1 To 10 

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int Start, int End)
{
	//Generate a Random Number

	int RandomNum = rand() % (End - Start + 1) + Start;
	return RandomNum;
}

int main()
{
	//The Random Number Genertor in C++ , Called Only Once :
	srand((unsigned)time(NULL));

	cout << RandomNumber(1, 10) << endl; 
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;

	return 0;
}
