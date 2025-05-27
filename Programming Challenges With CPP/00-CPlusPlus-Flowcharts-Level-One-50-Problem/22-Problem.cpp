// Problem_21 >> Circle Area Along the circumference 
// Write a program to calculate circle area along the circumference, then print it on the screen 
// Area = (L * L) / (4 * PI)


#include <iostream>
#include <cmath>
using namespace std;

float ReadLongCircumference()
{
	cout << "Write a program to calculate circle area along the circumference, then print it on the screen" << endl << endl;
	float L;
	cout << "Enter Along The Circumference : ";
	cin >> L;
	return L;
}

float CalcuCircleAreaLongCircumference(float L)
{
	const float PI = 3.14159265359;

	float Result = (pow(L, 2)) / (4 * PI);
	return Result;
}

void PrintCircleArea(float CircleArea)
{
	cout << "\n==========================\n";
	cout << "The Circle Area is  : " << CircleArea << endl;
	cout << "==========================\n";
}


int main()
{
	PrintCircleArea(CalcuCircleAreaLongCircumference(ReadLongCircumference()));
	return 0;
}

