// Problem_20 >> Circle Area Inscribed in a square 
// Write a program to calculate area inscribed in a square , then print it on the screen

#include <iostream>
#include <cmath>
using namespace std;

float ReadSquare()
{
	cout << "Write a program to calculate area inscribed in a square , then print it on the screen" << endl<< endl;

	float A;

	cout << "Enter The Square Side : ";
	cin >> A;
	return A;
}

float CalcuareaInscribedInSquare(float A)
{
	const float PI = 3.14159265359;

	float Result = (PI * pow(A, 2)) / 4;

	return Result;
}
void PrintCalculateArea(float CircleArea)
{
	cout << "\n==========================\n";
	cout << "The Circle Area is  : " << CircleArea << endl;
	cout << "==========================\n";
}

int main()
{
	PrintCalculateArea(CalcuareaInscribedInSquare(ReadSquare()));
	return 0;
}
