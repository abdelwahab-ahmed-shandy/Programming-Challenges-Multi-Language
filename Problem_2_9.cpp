// Problem_18 >>Circle Area 
// Write a program to calculate  circle area then print it on the screen 
// PI = 3.14
// Area = PI * (r * r)

#include <iostream>
#include <cmath>
using namespace std;

void ReadRadiusCircle(float &R)
{
	cout << "Write a program to calculate  circle area then print it on the screen" << endl << endl;
	
	cout << "Enter The Radius : ";
	cin >> R;
}

float CalcCircleArea(float R, float PI)
{
	float Result = (PI) * (pow(R,2)) ;
	return Result;
}

void PrintResultArea(float CircleArea)
{
	cout << "\n==========================\n";
	cout << "The Circle Area is  : " << CircleArea << endl;
	cout << "\n==========================\n";
}

int main()
{
	const float PI = 3.14159265359;
	float R;
	ReadRadiusCircle(R);
	PrintResultArea(CalcCircleArea(R , PI));
	return 0;
}
