//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================


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


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_24 >> Validate Age Between 18 and 45
// Write a program to ask the user enter Age
// - If age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge ()
{
	cout << "Write a program to ask the user enter Age If age is between 18 and 45 print Valid Age otherwise print Invalid Age" << endl << endl;
	int Age;
	cout << "Enter Your Age : ";
	cin >> Age;
	return Age;
}
bool CheckValidAge(int Age , int From , int To)
{
	return (Age >= From && Age <= To);
}

void PrintValideAge(int Age)
{
	if (CheckValidAge(Age, 18, 45))
	{
		cout << "\n========================\n";
		cout << Age << " Is Valid Age" << endl;
		cout << "========================\n";
	}
	else
	{
		cout << "\n========================\n";
		cout << Age << " Is InValid Age" << endl;
		cout << "========================\n";
	}
}

int main()
{
	PrintValideAge(ReadAge());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================
