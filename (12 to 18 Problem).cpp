//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_12 >> Write a program to ask the user to enter : (Number1 , Number2) , Then print the max Number.


#include <iostream>
using namespace std;

void ReadNumbers(float &Number1, float &Number2)
{
	cout << "Write a program to ask the user to enter : (Number1 , Number2) , Then print the max Number" << endl << endl;

	cout << "Enter Number 1 : ";
	cin >> Number1;

	cout << "Enter Number 2 : ";
	cin >> Number2;
}

float MaxNumber(float Number1, float Number2)
{
	if (Number1 > Number2)
		return Number1;
	else
		return Number2;
}

void PrintMaxNumber(float MaxNum)
{
	cout << "\n==================\n";
	cout << "The Max Of Number is : " << MaxNum << endl;
	cout << "==================\n";
}


int main()
{
	float Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintMaxNumber(MaxNumber(Number1, Number2));
	return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_13 >> Write a program to ask the user to enter 3 numbers : A , B , C , Then print Max number


#include <iostream>
using namespace std;

void ReadNumbers(float &NumOfA, float &NumOfB, float & NumOfC)
{
	cout << "Write a program to ask the user to enter 3 numbers : A , B , C , Then print Max number" << endl << endl;

	cout << "Enter Number 1 : ";
	cin >> NumOfA;

	cout << "Enter Number 2 : ";
	cin >> NumOfB;

	cout << "Enter Number 2 : ";
	cin >> NumOfC;
}

float MaxNumbers(float NumOfA, float NumOfB , float NumOfC)
{
	if (NumOfA > NumOfB)
		if (NumOfA > NumOfC)
			return NumOfA;
		else
			return NumOfC;
		else
			if (NumOfB > NumOfC)
				return NumOfB;
			else
				return NumOfC;
}

void PrintMaxNumber(float MaxNumber)
{
	cout << "\n==================\n";
	cout << "The Max Of Number is : " << MaxNumber << endl;
	cout << "==================\n";
}


int main()
{
	float NumOfA, NumOfB , NumOfC;
	ReadNumbers(NumOfA, NumOfB, NumOfC);
	PrintMaxNumber(MaxNumbers(NumOfA, NumOfB, NumOfC));
	return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_14 >> Swap Numbers Write a program to ask the user to user : Number1 . Number2  ,Then print two numbers , then swap the two numbers and print them 

#include <iostream>
using namespace std;

void ReadNumbers(int &Number1, int &Number2)
{
	cout << " Swap Numbers Write a program to ask the user to user : Number1 . Number2  ,Then print two numbers , then swap the two numbers and print them " << endl << endl;

	cout << "Enter Number 1  : ";
	cin >> Number1;

	cout << "Enter Number 2  : ";
	cin >> Number2;
}

//by reference 
void SwapNumbers(int &Number1,int &Number2)
{
	int Temp;
	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
}

void PrintNumber(int Number1, int Number2)
{
	cout << "\n==============================================\n";
	cout << "Number One is " << Number1 << " And Number Two is : " << Number2 << endl;
	cout << "==============================================\n";
}

int main()
{
	int Number1, Number2;
	ReadNumbers(Number1, Number2);
	PrintNumber(Number1, Number2);

	SwapNumbers(Number1, Number2);
	PrintNumber(Number1, Number2);

	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

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

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================



