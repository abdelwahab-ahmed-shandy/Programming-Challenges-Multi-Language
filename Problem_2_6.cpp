//Problem_15 >>Rectangle Area Write a program to calculate rectangle area and print it on the screen 
// Area = a*b 

#include <iostream>
#include <cmath>
using namespace std;

void ReadLengthWidth(float &A , float &B)
{
	cout << "Rectangle Area Write a program to calculate rectangle area and print it on the screen  , Area = a*b" << endl << endl;
	
	cout << "Enter The Length : ";
	cin >> A;

	cout << "Enter The Width : ";
	cin >> B;
}

float CalcRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResultArea(float RectangleArea)
{
	cout << "\n==========================\n";
	cout << "The Rectangle Area is : " << RectangleArea << endl;
	cout << "\n==========================\n";
}

int main()
{
	float A, B;
	ReadLengthWidth(A, B);
	PrintResultArea(CalcRectangleArea(A, B));
	return 0;
}

