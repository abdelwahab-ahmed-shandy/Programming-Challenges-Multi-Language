// Problem_19 >> Circle Area Through Diameter
// Write a program to calculate circle area through dirameter, then print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

void ReadDirameterCircle(float &D)
{
	cout << "Write a program to calculate circle area through dirameter, then print it on the screen" << endl << endl;
	
	cout << "Enter The Radius : ";
	cin >> D;
}

float CalcCircleArea(float D, float PI)
{
	float Result = ( PI * pow(D, 2) ) / 4;
	return Result;
}

void PrintResultArea(float CircleArea)
{
	cout << "\n==========================\n";
	cout << "The Circle Area is  : " << CircleArea << endl;
	cout << "==========================\n";
}

int main()
{
	const float PI = 3.14159265359;
	float D;
	ReadDirameterCircle(D);
	PrintResultArea(CalcCircleArea(D , PI));
	return 0;
}

