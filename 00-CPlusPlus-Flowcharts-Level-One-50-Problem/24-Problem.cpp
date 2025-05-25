// Problem_23 >> Circle Area Circle Described Around an Arbitrary Triangle
// Write a program to calculate Circle Described Around an Arbitrary Triangle ,Then print it on the screen .
// T = (a*b*c) / (4*sqrt (P*(P-a)*(P-b)*(P-c)))

#include <iostream>
#include <cmath>
using namespace std;

void ReadRightSideBase(float &A, float &B, float &C)
{
	cout << "Write a program to calculate Circle Described Around an Arbitrary Triangle ,Then print it on the screen" << endl << endl;
	cout << "Enter The Right Side : ";
	cin >> A;
	cout << "Enter The Triangle Base : ";
	cin >> B;
	cout << "Enter The Triangle Side : ";
	cin >> C;
}

float CalcuCircleAreaTriangle(float A , float B , float C)
{
	const float PI = 3.14159265359;
	float P = (A + B + C) / 2;
	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float Result = PI * pow(T, 2);
	return Result;
}

void PrintCircleAreaArbitraryTriangle(float CircleArea)
{
	cout << "\n====================================================\n";
	cout << "The Circle Area as Arbitrary Triangle  : " << CircleArea << endl;
	cout << "====================================================\n";
}


int main()
{
	float A, B,C;
	ReadRightSideBase(A, B,C);
	PrintCircleAreaArbitraryTriangle(CalcuCircleAreaTriangle(A,B,C));
	return 0;
}

