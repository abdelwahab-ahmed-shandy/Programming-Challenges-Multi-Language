// Problem_17 >>Triangle Area 
// Write a program to calculate triangle area then print it on the screen 
// Area = a/2 * h


#include <iostream>
#include <cmath>
using namespace std;

void ReadTriangleBaseHeight(float &A , float & H)
{
	cout << "Write a program to calculate triangle area then print it on the screen" << endl << endl;
	
	cout << "Enter The Triangle Base : ";
	cin >> A;

	cout << "Enter The height : ";
	cin >> H;
}

float CalcRectangleArea(float A, float H)
{
	float Result = (A/2) * H ;
	return Result;
}

void PrintResultArea(float TriangleArea)
{
	cout << "\n==========================\n";
	cout << "The Triangle Area is  : " << TriangleArea << endl;
	cout << "\n==========================\n";
}

int main()
{
	float A, H;
	ReadTriangleBaseHeight(A, H);
	PrintResultArea(CalcRectangleArea(A, H));
	return 0;
}
