// Problem_16 >>Rectangle area though diagonal and side Area .
// Write a program to calculate rectangle area through diagonal and site area of rectangle and print it on the screen .
// Area = a * sqrt(d*d - a*a)

#include <iostream>
#include <cmath>
using namespace std;

void ReadDiagonalSideArea(float &A , float &D)
{
	cout << "Rectangle area though diagonal and side Area Write a program to calculate rectangle area through diagonal and site area of rectangle and print it on the screen ." << endl << endl;
	
	cout << "Enter The Diagonal : ";
	cin >> A;

	cout << "Enter The Side Area : ";
	cin >> D;
}

float CalcRectangleArea(float A, float D)
{
	float Result = (A)*sqrt( pow(D, 2) - pow(A, 2) );
	return Result;
}

void PrintResultArea(float RectangleArea)
{
	cout << "\n==========================\n";
	cout << "Rectangle Area Though Diagonal and Side Area : " << RectangleArea << endl;
	cout << "\n==========================\n";
}

int main()
{
	float A, D;
	ReadDiagonalSideArea(A, D);
	PrintResultArea(CalcRectangleArea(A, D));
	return 0;
}
