//Problem_22 >> Circle Area Inscribed in an Isosceles Triangle
//Write a program to calculate circle area Inscribed in an Isosceles Triangle, Then print it on the screen
// Area = (PI*b*b/4)*((2*a-b)/(2*a+b))

#include <iostream>
#include <cmath>
using namespace std;

void ReadSideBase(float &A, float &B)
{
	cout << "Write a program to calculate circle area Inscribed in an Isosceles Triangle, Then print it on the screen" << endl << endl;
	cout << "Enter The Triangle side : ";
	cin >> A;
	cout << "Enter The Triangle Base : ";
	cin >> B;
}

float CalcucircleAreaTriangle(float A , float B)
{
	const float PI = 3.14159265359;

	float Result = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B) );
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
	float A, B;
	ReadSideBase(A, B);
	PrintCircleArea(CalcucircleAreaTriangle(A,B));
	return 0;
}
