//================================================================================================================================================================
//========================================================================== THIS IS Start =======================================================================
//================================================================================================================================================================

//Problem_1 >> Write a program to print your name on screen 

#include <iostream> 
using namespace std;

void PrintName(string Name) 
{
	cout << "Your Name Is : " << Name << endl;
}

int main()
{
	PrintName("Abdelwahab Shandy");
	
	return 0;
}
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_2 >> Write a program to ask the user to enter his / hir name and print it on screen

#include <iostream> 
#include <string>

using namespace std;

string ReadYourName()
{
	string YourName;

	cout << "Enter Your Name : ";
	getline(cin, YourName);
	return YourName;
}

void PrintYourName(string YourName)
{
	cout << "============================================\n";
	cout << "Your Name is : " << YourName << endl;
}

int main()
{
	PrintYourName(ReadYourName());
}
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_3 >> Write a program to ask the user to enter a number , then print "ODD" if its odd , or "EVEN if its even

#include <iostream>
using namespace std;

int ReadNum(int &EnterNum) 
{
	cout <<"Write a program to ask the user to enter a number , then print ODD if its odd , or EVEN if its even"<<endl;
	cout << "Enter Your Number : ";
	cin >> EnterNum;
	return EnterNum;
}

enum enTYpeNumbers {ODD =1 ,EVEN =2 };

enTYpeNumbers CheakNumType(int EnterNum)
{
	int Result = EnterNum % 2;

	if (Result == 0)
		return enTYpeNumbers::EVEN;
	else
		return enTYpeNumbers::ODD;
}

void PrintTyprNum(enTYpeNumbers TypeNum)
{
	if (TypeNum == enTYpeNumbers::EVEN) 
	{
		cout <<endl<< "=====================" << endl;
		cout << "Number is a Even" << endl;
		cout << "=====================" << endl;
	}
	else
	{
		cout << endl << "=====================" << endl;
		cout << "Number is a Odd" << endl;
		cout << "=====================" << endl;
	}

}

int main()
{
	int enterNum;
	PrintTyprNum(CheakNumType(ReadNum(enterNum)));
	return 0;
}
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_4 >> Write a program to ask the user to enter his/her Age and Driver license Then print "Hired" if his/her age is grater than 21 and s/he has a driver license, otherwise print "Rejected"

#include <iostream>
using namespace std;

struct strInfo 
{
	string YourName;
	int Age;
	bool DriverLicense;
};

strInfo ReadInfo()
{
	cout << "Write a program to ask the user to enter his/her Age and Driver license Then print Hired if his/her age is grater than 21 and s/he has a driver license, otherwise print Rejected" << endl;
	
	strInfo person;
	cout << "Enter Your Name : ";
	cin >> person.YourName;

	cout << "How Old Are You : ";
	cin >> person.Age;

	cout << "Do you have a driving license (Yes type 1, No type 0) : ";
	cin >> person.DriverLicense;
	return person;
}

bool ChackInfoPerson(strInfo person)
{
	return (person.Age > 21 && person.DriverLicense);
}

void PrintAccepetORNot(strInfo person)
{
	if (ChackInfoPerson(person))
		cout <<endl << "Hello , Hired" << endl;
	else
		cout <<endl <<"Sorry , Rejected" << endl;
}

int main()
{
	PrintAccepetORNot(ReadInfo());
	return 0;
}
//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_5 >> Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation! Then print "Hired if his/her" age is grater than 21 and s/he has a driver license , otherwise print "Rejected" Or Hire him/her without conditions! 

#include <iostream>
using namespace std;

struct strInfo
{
	string YourName;
	int Age;
	bool DriverLicense;
	bool Recommendation;
};

strInfo ReadInfo()
{
	cout << "Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation! Then print Hired if his / her age is grater than 21 and s/he has a driver license , otherwise print Rejected Or Hire him/her without conditions!" << endl;

	strInfo person;
	cout << "Enter Your Name : ";
	cin >> person.YourName;

	cout << "Do you Have Recommendition (Yes type 1, No type 0) : ";
	cin >> person.Recommendation;

	cout << "How Old Are You : ";
	cin >> person.Age;

	cout << "Do you have a driving license (Yes type 1, No type 0) : ";
	cin >> person.DriverLicense;
	return person;
}

bool ChackInfoPerson(strInfo person)
{
	if (person.Recommendation== true)
		return true;
	else 
		return (person.Age > 21 && person.DriverLicense);
}

void PrintAccepetORNot(strInfo person)
{
	if (ChackInfoPerson(person))
		cout << endl << "Hello , Hired" << endl;
	else
		cout << endl << "Sorry , Rejected" << endl;
}

int main()
{
	PrintAccepetORNot(ReadInfo());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_6 >> Write a program to ask user to enter : first name amd last name

#include <iostream>
using namespace std;

struct strPersonalInfo
{
	string FirstName;
	string LastName;
};

strPersonalInfo ReadPersonlInfo()
{	
	cout << "Write a program to ask user to enter : first name amd last name" << endl;
	strPersonalInfo person;

	cout << "Enter Your First Name : ";
	cin >> person.FirstName;

	cout << "Enter Your Last Name : ";
	cin >> person.LastName;

	return person;
}

void PrintPersonalInfo(strPersonalInfo person)
{
	cout << endl << "Your ia a Full Name : " << person.FirstName << " " << person.LastName << endl;
}


int main()
{
	PrintPersonalInfo(ReadPersonlInfo());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

Problem_7 >> Write a program to ask the user to enter : Number  , Then print the "Half of the <Number> is <???>"

#include <iostream>
using namespace std;

float ReadNumber() 
{
	float Number;
	cout << "Write a program to ask the user to enter : Number  , Then print the Half of the <Number> is < ? ? ? >" << endl << endl; 
	
	cout << "Enter Your Number :";
	cin >> Number;

	return Number;
}

float GetHalfNum( float Number)
{
	float  HalfNumber = Number / 2;
	return HalfNumber;
}

void PrintHalfNumber(float Number)
{
	cout << "\nHalf of the  " << Number << " is  " << GetHalfNum(Number) << endl;
}

int main()
{
	PrintHalfNumber(ReadNumber());

	return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

Problem_8 >> Write a program to ask the user to enter : Mark Then print the "PASS" if mark >= 50 , Otherwise print "Fail"

#include <iostream>
using namespace std;

float ReadMarkStudent()
{
	cout << "Write a program to ask the user to enter : Mark Then print the PASS if mark >= 50 , Otherwise print Fail" << endl << endl;

	float Mark;
	cout << "Enter Your Mark : ";
	cin >> Mark;
	
	return Mark;
}

string CheckPassFail(float Mark)
{
	string  result;
	if (Mark >= 50)
		result = "PASS";
	else 
		result = "FAIL";
	return result;
}

void PrintMarkStudent(float Mark)
{
	cout << endl << "You Are : " << CheckPassFail(Mark) << endl;
}

int main()
{
	PrintMarkStudent(ReadMarkStudent());

	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_9 >>  Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers 

#include <iostream>
using namespace std;

void ReadNumbers(int Arry[3])
{
	cout << "Write a program to ask the user to enter : Number1, Number2, Number3 Then print the Sum of entered numbers" << endl << endl;

	cout << "Enter Number 1 : ";
	cin >> Arry[0];

	cout << "Enter Number 2 : ";
	cin >> Arry[1];

	cout << "Enter Number 3 : ";
	cin >> Arry[2];
}

int SumNumbers(int Arry[3])
{
	int Sum;

	Sum = Arry[0] + Arry[1] + Arry[2];

	return Sum;
}

void PrintSumNumbers(int Sum)
{
	cout << "\n====================================\n";
	cout << "The Sum Of Numbers is : " << Sum << endl;
	cout << "====================================\n";
}

int main()
{
	int Arry[3];
	ReadNumbers(Arry);
	PrintSumNumbers(SumNumbers(Arry));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

Problem_10 >> Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then print the average of entered Marks

#include <iostream>
using namespace std;

void ReadMarks(float & Mark1 ,float & Mark2, float & Mark3)
{
	cout << "Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then print the average of entered Marks" << endl << endl;

	cout << "Enter Mark 1 : ";
	cin >> Mark1;

	cout << "Enter Mark 2 : ";
	cin >> Mark2;

	cout << "Enter Mark 3 : ";
	cin >> Mark3;
}

float SumMarks(float Mark1,float Mark2,float Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float AvergeCalc(float Mark1, float Mark2, float Mark3)
{
	return SumMarks(Mark1, Mark2, Mark3) / 3;
}

void PrintResutAverge(float Result)
{
	cout << "\n====================================\n";
	cout << "The Average Of Marks is : " << Result << endl;
	cout << "====================================\n";
}

int main()
{
	float Mark1, Mark2 , Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResutAverge(AvergeCalc(Mark1, Mark2, Mark3));

	return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_11 >> Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then Print the Average of entered Marks , and print "Pass" if average >= 50 , otherwise print "Fail"

#include <iostream>
using namespace std;

enum enStudentsResult { Pass = 1 , Fail = 2};

void ReadMarks(float& Mark1, float& Mark2, float& Mark3)
{
	cout << "Write a program to ask the user to enter : Mark1 , Mark2 , Mark3 Then Print the Average of entered Marks , and print Pass if average >= 50 , otherwise print Fail" << endl << endl;

	cout << "Enter Mark 1 : ";
	cin >> Mark1;

	cout << "Enter Mark 2 : ";
	cin >> Mark2;

	cout << "Enter Mark 3 : ";
	cin >> Mark3;
}

float SumMarks(float Mark1, float Mark2, float Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float AvergeCalc(float Mark1, float Mark2, float Mark3)
{
	return SumMarks(Mark1, Mark2, Mark3) / 3;
}

enStudentsResult CheckPassFail(float Result)
{
	if (Result >= 50)
		return enStudentsResult::Pass;
	else
		return enStudentsResult::Fail;
}


void PrintResutAverge(float Result)
{
	if (Result == enStudentsResult::Pass)
	{
		cout << "\n=================================\n";
		cout << "Your Score Is Pass " << endl;
		cout << "\n=================================\n";
	}
	else
	{
		cout << "\n=================================\n";
		cout << "Your Score Is Fail " << endl;
		cout << "=================================\n";
	}
}

int main()
{
	float Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResutAverge(CheckPassFail(AvergeCalc(Mark1, Mark2, Mark3)));

	return 0;
}

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

// Problem_25 >> Read until Age between 18 and 45
// Write a program to ask the user to enter : age if age is 18 and 45 print "Valid Age" otherwise print "Invalid Age" and re - ask user to enter a valid age .
// note : you should keep asking user to enter a valid age until s / she enters it .

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge ()
{
	//cout << "Write a program to ask the user to enter : age if age is 18 and 45 print Valid Age otherwise print Invalid Age and re - ask user to enter a valid age" << endl << endl;
	int Age;
	cout << "Enter Your Age : ";
	cin >> Age;
	return Age;
}

bool CheckValidAge(int Age , int From , int To)
{
	return (Age >= From && Age <= To);
}

int KeepAskingUser(int From , int To)
{
	int Age = 0;
	do
	{
		Age = ReadAge(); 
	} while (!CheckValidAge(Age , From , To));
	return Age;
}

void PrintValideAge(int Age)
{
	cout << "Your Age is  " << Age << " Valid Age " << endl;
}

int main()
{
	
	PrintValideAge(KeepAskingUser(18,45));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_26 >> Read numbers from 1 to N(loops)
// Write a program to print numbers from 1 to N

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to print numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}
void Print_1_To_N(int N)
{
	int i = 0;
	cout <<endl<< "The Number " << i << " Of Range " << N << endl << endl;
	for (i ; i <= N; i++)
	{
		i++;
		cout << "Number : " << i << endl;
	}
}

int main()
{
	Print_1_To_N(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_27 >> Read numbers from 1 to N (loops )
// Write a program to print numbers from N to 1 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to print numbers from N to 1 " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}

void Print_N_To_1(int N)
{
	int i = N +1;
	cout << endl << "The Number 1 Of Range " << N << endl << endl;
	
	while (i > 1)
	{
		i--;
		cout << "Number : " << i << endl;
	}
	
}

int main()
{
	Print_N_To_1(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_28 >> Sum Odd Numbers from 1 to N 
// Write a program to Sum ODD numbers from 1 to N

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Write a program to Sum ODD numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}
void PrintSumOdd(int N)
{
	int i = 0;
	int Sum = 0;
	cout << "Sum ODD Numbers From 1 to N" << endl << endl; 
	for (i; i < N; i++)
	{
		i = i + 1;
		cout <<"ODD Number : " << i << endl;
		Sum = Sum + i;
	}
	cout << "\n=============================\n";
	cout << "The Sum ODD Numbers From 1 To "<<N <<" Is " << Sum << endl;
}

int main()
{
	PrintSumOdd(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_29 >> Sum EVEN Numbers from 1 to N 
// Write a program to Sum EVEN numbers from 1 to N 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enEvenOdd {ODD = 0 , EVEN =2};

int ReadNumber()
{
	int N;
	cout << "Write a program to Sum EVEN Numbers from 1 to N " << endl << endl;
	cout << "Enter Number : ";
	cin >> N;
	return N;
}

enEvenOdd Check(int N)
{
	if (N % 2 == 0)
		return enEvenOdd::EVEN;
	else
		return enEvenOdd::ODD;
}

int SumEVEN(int N)
{
	int Sum = 0;
	int i = 0; 
	cout << "=======================\n";
	for (i=1; i <= N; i++)
	{
		if (Check(i) == enEvenOdd::EVEN) 
		{
			Sum += i;
			cout << i << endl;
		}
	}
	cout << "=======================\n";
	return Sum;
}

void PrintSumEven(int Sum)
{
	cout << "The Sum Even Is : " << Sum<<endl; 
}

int main()
{
	PrintSumEven(SumEVEN(ReadNumber()));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_30 >> Factorial of N!
// Write a program to calculate factorial of N !
// factorial of 5 >> 5 * 4 * 3 * 2 * 1 = 120
// note : User should only positive number , other wise reject it and ask to enter again 

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num;
	do
	{
		cout << Message ;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

int NumberFactorial(int N)
{
	int Factorial = 1;
	for (int i = N; i >= 1; i--)
	{
		Factorial = Factorial * i;
	}
	return Factorial;
}
void PrintNumberFactorial(int Factorial)
{
	cout << "The Positive number is : " << Factorial << endl;
}

int main()
{
	PrintNumberFactorial(NumberFactorial(ReadPositiveNumber("Enter a Positive Number :")));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_31 >> Power of 2, 3, 4
// Write a program to ask the user to enter : Number
// # then print the  Number 2, Number 3, Number 4
// input >> 3
// output >> 9, 27, 81

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
	int Num;
	cout << "Enter Number : ";
	cin >> Num;
	return Num;
}

void PrintNumberOfPower(int Num)
{
	cout << "\n============================================\n";
	cout << "The Power "<<Num << " Of 2 : " << pow(Num, 2) << endl;
	cout << "The Power "<<Num << " Of 3 : " << pow(Num, 3) << endl;
	cout << "The Power "<<Num << " Of 4 : " << pow(Num, 4) << endl;
	cout << "============================================";
}


int main()
{
	PrintNumberOfPower(ReadNumber());
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_32 >> Power of M (LOOPS)
// Write a program to ask the user to enter : Number , M 
// Then print the Number ^ M
// input >> 2 , 4
// output >> 16 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumber(int &Num , int &M)
{
	cout << "Enter Number : ";
	cin >> Num;
	cout << "Enter M : ";
	cin >> M;
}

void PrintNumberOfPower(int Num , int M)
{
	cout << "\n============================================\n";
	cout << "The Power "<< Num << " Of " << M <<" : " << pow(Num, M) << endl;
	cout << "============================================";
}


int main()
{
	int Num, M;
	ReadNumber(Num, M);
	PrintNumberOfPower(Num, M);
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_33 >> Grade A, B, C, D, E, F
//Write a program to ask the user to enter : Grade
//Then print the grade as follows :
//-100 - 90 print A
//- 89 - 80 print B
//- 79 - 70 print C
//- 69 - 60 print D
//- 59 - 50 print E
//Overwise print F


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadGread(int From , int To)
{
	int Grade;
	do 
	{
		cout << "Enter Your Grade between 0 To 100 : ";
		cin >> Grade;
	} while (Grade<From || Grade >To);
	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

void PrintGrade(char Grade)
{
	cout << "The Result is :" << Grade << endl;
}

int main()
{
	PrintGrade(GetGradeLetter(ReadGread(0, 100)));
	return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//  Problem_34 >> Commission Percentage
//  Write a program to ask the user to enter : Total sales
//  - The commission is calculate as one percentage * the total sales amount, all you need is to decide which percentage to use of the following :
//  > 1000, 000 -- > Percentage is 1 %
//  > 500K to 1M-- > Percentage is 2 %
//  > 100K - 500K-- > Percentage is 3 %
//  > 50K to 100K-- > Percentage is 5 %
//  > otherwise-- > Percentage is 0 %
//  Input >> 110, 000
//  Output >> 3, 300


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadTotalSalse()
{
    float TotalSalse;

    cout << "Enter a Total Sales: ";
    cin >> TotalSalse;
    return TotalSalse;
}

float CommissionSalse(float TotalSalse)
{
    if (TotalSalse >= 1000000)
        return 0.01;
    else if (TotalSalse >= 500000)
        return 0.02;
    else if (TotalSalse >= 100000)
        return 0.03;
    else if (TotalSalse >= 50000)
        return 0.05;
    else
        return 0.00;
}

float CalcuCommissionPercentage(float TotalSalse)
{
    return CommissionSalse(TotalSalse) * TotalSalse;
}

void PrintCommissionPercentage(float TotalSalse)
{
    float commissionRate = CommissionSalse(TotalSalse);
    float totalCommission = CalcuCommissionPercentage(TotalSalse);

    cout << endl << "Commission Percentage = " << commissionRate * 100 << "%" << endl;
    cout << "Total Commission = " << totalCommission << endl;
}

int main()
{
    float totalSales = ReadTotalSalse();
    PrintCommissionPercentage(totalSales);
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

//Problem_35 >> Piggy Bank Calculator 
//Write a program to ask the user to enter:
//Pennies , Nickels , Dimes , Quarters , Dollars 
//#Then calculate the total pennies , total dollars and print them on screen giving that :
//- penny  = 1
//- Nickel = 5
//- Dime   = 10
//- Quarter= 25
//- Dollar = 100

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct strMoney
{
    int Penny;
    int Nickel;
    int Dime;
    int Quarter;
    int Dollar;
};

strMoney ReadMony()
{
    strMoney MonyPNDQD;

    cout << "Enter Your Total Penny : ";
    cin >> MonyPNDQD.Penny;
    cout << "Enter Your Total Nickel : ";
    cin >> MonyPNDQD.Nickel;
    cout << "Enter Your Total Dime : ";
    cin >> MonyPNDQD.Dime;
    cout << "Enter Your Total Quarter : ";
    cin >> MonyPNDQD.Quarter;
    cout << "Enter Your Total Dollar : ";
    cin >> MonyPNDQD.Dollar;

    return MonyPNDQD;
}

int CalcuMonyPNDQD(strMoney MonyPNDQD)
{
    int TotalPennies = 0;
    TotalPennies = (MonyPNDQD.Penny * 1) + (MonyPNDQD.Nickel * 5) + (MonyPNDQD.Dime * 10) + (MonyPNDQD.Quarter * 25) + (MonyPNDQD.Dollar * 100);
    return TotalPennies;
}


int main()
{
    int TotalPennies, TotalDollar;

    TotalPennies = CalcuMonyPNDQD(ReadMony());
    //TotalDollar = CalcuMonyPNDQD(ReadMony()) / 100;

    cout << "\nTotal Pennies is : "<< TotalPennies <<endl;
    cout << "\nTotal Pennies is : " << TotalPennies /100 << endl;

    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_36 >> Simple Calculator
// Write a program to ask the user to enter :
// -Number1, Number2, Operation Type
// Then perform the calculation according to the operation type as follows :
// -"+" add the two numbers.
// - "-" subtract the two numbers.
// - "*" multiply the two numbers.
// - "/" devide the two numbers.


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{
    float Num = 0;
    cout << Message << endl;
    cin >> Num;

    return Num;
}

enum enTypeOpert { Add, Subtract, Multiply, Divide };

enTypeOpert ReadTypeOpert()
{
    char CharTypeOpert;
    cout << "Enter Operation Type ( +, - , * , / ) : " << endl;
    cin >> CharTypeOpert;
    switch (CharTypeOpert)
    {
    case '+':
        return enTypeOpert::Add;
    case '-':
        return enTypeOpert::Subtract;
    case '*':
        return enTypeOpert::Multiply;
    case '/':
        return enTypeOpert::Divide;
    default:
        cout << "Invalid Operation, defaulting to Add." << endl;
        return enTypeOpert::Add;
    }
}

float CalcuNumbers(float Num1, float Num2, enTypeOpert TypeOperation)
{
    switch (TypeOperation)
    {
    case enTypeOpert::Add:
        return Num1 + Num2;
    case enTypeOpert::Subtract:
        return Num1 - Num2;
    case enTypeOpert::Multiply:
        return Num1 * Num2;
    case enTypeOpert::Divide:
        return Num1 / Num2;
    default:
        return Num1 + Num2;
    }
}

int main()
{
    float Num1 = ReadNumber("Enter the First Number");
    float Num2 = ReadNumber("Enter the Second Number");

    enTypeOpert CharTypeOpert = ReadTypeOpert();

    cout << "\nResult : " << CalcuNumbers(Num1, Num2, CharTypeOpert) << endl;

    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_37 >> Sum Until - 99
// Write a program to read numbers from user and sum them, keep reading unit the user enters - 99 then print the Sum on screen


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNum(string Message)
{
    float Num = 0;
    cout << Message << endl;
    cin >> Num;

    return Num;
}

float SumNum()
{
    int Sum = 0;
    int Number = 0;
    int Counter = 0;

    do
    {
        Number = ReadNum("Enter Number : ");
        if (Number == -99)
        {
            break;
        }
        Sum = Sum + Number;
        Counter++;
    } while (Number != -99);
    
    return Sum;
}

int main()
{
    cout << "===============================\n";
    cout << endl << "The Result = " << SumNum() << endl;
    cout << "===============================\n";
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_38 >> Is Prime Number ? 
// Write a program to read a number and check if it is a prime number or not 


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeOrNot {Prime =1 , NotPrime= 2};

enPrimeOrNot CheckPrime(int Num)
{
	int M = round(Num / 2);

	for (int i = 2; i <= M; i++)
	{
		if (Num % i == 0)
			return enPrimeOrNot::NotPrime;
	}
	return enPrimeOrNot::Prime;
}

float ReadPositiveNumber(string Message)
{
	float Num = 0;

	do
	{
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

void PrintNum(int Num)
{
	switch (CheckPrime(Num))
	{
	case enPrimeOrNot::Prime:
		cout << "Prime Number \n";
		break;
	case enPrimeOrNot::NotPrime:
		cout << "Not Prime Number \n";
		break;
	}
}

int main()
{
	PrintNum(ReadPositiveNumber("Enter Positive Number : "));
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================


// Problem_39 >> Pay Remainder ? 
// Write a program to read a totalBill nd cashpaid and calculate the remainder to paid back .


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadBillPaid(float &TotalBill,float &CashPaid)
{
    cout << "Enter The Total Bill :";
    cin >> TotalBill;
    cout << "Enter The Cash Paid :";
    cin >> CashPaid;
}

float CalcuPayRemainder(float TotalBill,float CashPaid)
{
    float TotalPayRemainder = CashPaid - TotalBill;
    return TotalPayRemainder;
}

void PrintRemainder(float TotalPayRemainder)
{
    cout << endl << "The Total Pay Remainder : " << TotalPayRemainder << endl;
}

int main()
{
    float TotalBill, CashPaid;
    ReadBillPaid(TotalBill, CashPaid);
    PrintRemainder(CalcuPayRemainder(TotalBill, CashPaid));
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_40 >> Sevice Fee and Salse Tax
// Write a program to read a BillValue and add Service fee and salse tax tax to it, and print the totalbill on the screen
// - A Resturant charge 10 % services fee and 16 % salse Tax

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadBillValue()
{
    float BillValue = 0;
    cout << "Enter The Bill Value : ";
    cin >> BillValue;
    return BillValue;
}
float CalcuTotalBill(float BillValue)
{
    float TotalBill = BillValue * 1.1  ;
    TotalBill = TotalBill * 1.16;
    return TotalBill;
}
void PrintTotalBill(float TotalBill)
{
    cout << endl << "The Total Bill Is : " << TotalBill << endl;
}
int main()
{
    PrintTotalBill(CalcuTotalBill(ReadBillValue()));
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_41 >> Weeks and Days
// Write a program to read a NumberOfHours and calculate the number of weeks and days included in that number

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumOfHours()
{
    float NumOfHours = 0;
    cout << "Enter The Number Of Hours: ";
    cin >> NumOfHours;
    return NumOfHours;
}

void CalcWeekDay(float NumOfHours, float& NumOfDays, float& NumOfWeeks)
{
    NumOfDays = NumOfHours / 24;
    NumOfWeeks = NumOfDays / 7;
}

void PrintNumOfDayWeek(float NumOfDays, float NumOfWeeks)
{
    cout << endl << "The Number Of Weeks Is: " << NumOfWeeks << endl;
    cout << endl << "The Number Of Days Is: " << NumOfDays << endl;
}

int main()
{
    float NumOfHours = ReadNumOfHours();
    float NumOfDays = 0, NumOfWeeks = 0;
    CalcWeekDay(NumOfHours, NumOfDays, NumOfWeeks);
    PrintNumOfDayWeek(NumOfDays, NumOfWeeks);
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_42 >> Task Duration In Seconds
// Write a program to calculate the task duration in seconds and print it on screen
// >> Give the time duration of a task in the numbers of days, hours, minutes and seconds
// Input >> 2, 4, 45, 35
// Output >> 193, 535 Seconds

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Num = 0;

    do
    {
        cout << Message ;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

struct strDurationTime
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

strDurationTime ReadDurationTime()
{
    strDurationTime DurationTime;
    DurationTime.NumberOfDays = ReadPositiveNumber("Enter Number Of Days : ");
    DurationTime.NumberOfHours = ReadPositiveNumber("Enter Number Of Hours : ");
    DurationTime.NumberOfMinutes = ReadPositiveNumber("Enter Number Of Minutes : ");
    DurationTime.NumberOfSeconds = ReadPositiveNumber("Enter Number Of Seconds : ");

    return DurationTime;
}

int DurationInSeconds(strDurationTime DurationTime)
{
    int TotalDurationInSeconds = 0;

    TotalDurationInSeconds += DurationTime.NumberOfDays * 24 * 60 * 60;
    TotalDurationInSeconds += DurationTime.NumberOfHours * 60 * 60;
    TotalDurationInSeconds += DurationTime.NumberOfMinutes * 60;
    TotalDurationInSeconds += DurationTime.NumberOfSeconds;

    return TotalDurationInSeconds;
}

int main()
{
    cout << "The Task Duration In Seconds: " << DurationInSeconds(ReadDurationTime()) << endl;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_43 >> Seconds to Days Hours Minutes Seconds
// Write a program that inputs the number of seconds and changes it to days, hours, minutes and seconds

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct strTimeChanges
{
    int Days, Hours, Minutes, Seconds;
};

int ReadPositiveNumber(string Message)
{
    int Num = 0;

    do
    {
        cout << Message;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}

strTimeChanges TimeChangeSeconds(int TotalSeconds)
{
    strTimeChanges TimeChange;
    const int SecondsPerDays = 24 * 60 * 60;
    const int SecondsPerHours = 60 * 60;
    const int SecondsPerMinutes = 60;

    int Remainder;

    TimeChange.Days = floor(TotalSeconds / SecondsPerDays);
    Remainder = TotalSeconds % SecondsPerDays;

    TimeChange.Hours = floor(TotalSeconds / SecondsPerHours);
    Remainder = TotalSeconds % SecondsPerHours;

    TimeChange.Minutes = floor(TotalSeconds / SecondsPerMinutes);
    Remainder = TotalSeconds % SecondsPerMinutes;

    TimeChange.Seconds = Remainder;

    return TimeChange;
}

void PrinTimeChanges(strTimeChanges TimeChanges)
{
    cout << endl << TimeChanges.Days    <<" : "
                 << TimeChanges.Hours   <<" : "
                 << TimeChanges.Minutes <<" : "
                 << TimeChanges.Seconds << endl;
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Enter Total Seconds : ");
    PrinTimeChanges(TimeChangeSeconds(TotalSeconds));
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_44 >> Day of week
// Write a program to ask the user to enter : Day
// Then Print the day as follows :
// 1 Print Sunday
// 2 Print Monday
// 3 Print Tuesday
// 4 Print Wednesday
// 5 Print Thursday
// 6 Print Friday
// 7 Print Saturday
// - Otherwise print  " Wrong Day " and ask the use to enter the day again

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enDays { Sunday = 1, Monday = 2 , Tuesday = 3 , Wednesday = 4 , Thursday = 5, Friday= 6, Saturday=7};

int ReadNumberOfDay(string Message, int From, int To)
{
    int Num = 0;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (Num < From || Num >To);
    
    return Num;
}

enDays ReadDayOfWeek()
{
    return (enDays)ReadNumberOfDay("Enter Day Number Sunday = 1 Monday = 2  Tuesday = 3  Wednesday = 4  Thursday = 5  Friday = 6  Saturday = 7", 1 ,7);
}

string DayOfWeek(enDays Day)
{
    switch (Day)
    {
    case enDays::Sunday:
        return "Sunday";
    case enDays::Monday:
        return "Monday";
    case enDays::Tuesday:
        return "Tuesday";
    case enDays::Wednesday:
        return "Wednesday";
    case enDays::Thursday:
        return "Thursday";
    case enDays::Friday:
        return "Friday";
    case enDays::Saturday:
        return "Saturday";
    default :
        return "Not Found";
    }
}

int main()
{
    cout << DayOfWeek(ReadDayOfWeek()) << endl;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_45 >> Month Of year
// Write a program to ask the user to enter : Month
// Then Print the day as follows :
// 1 print Jun
// 2 print Feb
// 3 print Mar
// 4 print Apr
// 5 print May
// 6 print June
// 7 print July
// 8 print Aug
// 9 print Sep
// 10 print Oct
// 11 print Nov
// 12 print December
// - Otherwise print  " Wrong Day " and ask the use to enter the Manth again

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enMonth
{
    Jun = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, June = 6,
    July = 7, Aug = 8, Sep = 9, Oct = 10, Nov=11, Dec = 12
};

int ReadNumInReange(string Message, int From, int To)
{
    int Num = 0;
    do
    {
        cout << Message << endl;
        cin >> Num;
    } while (From > Num || Num > To);
    return Num;
}

enMonth ReadMonthYear()
{
    return (enMonth)ReadNumInReange("Enter Number Of Month : ", 1, 12);
}

string GetMonth(enMonth Month)
{
    switch (Month)
    {
    case enMonth::Jun :
        return "Jun";
    case enMonth::Feb:
        return "Feb";
    case enMonth::Mar:
        return "Mar";
    case enMonth::Apr:
        return "Apr";
    case enMonth::May:
        return "May";
    case enMonth::June:
        return "June";
    case enMonth::July:
        return "July";
    case enMonth::Aug:
        return "Aug";
    case enMonth::Sep:
        return "Sep";
    case enMonth::Oct:
        return "Oct";
    case enMonth::Nov:
        return "Nov";
    case enMonth::Dec:
        return "Dec";
    default:
        return "Not Found";
    }
}

int main()
{
    cout << GetMonth(ReadMonthYear()) << endl;
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_46 >> Print Letter From a to z
// Write a program to print all letters from A to Z

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintAToZ()
{
    int i = 65;
	for (i ;  i <= 90 ;i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	PrintAToZ();
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================


// Problem_47 >> Loan Installment Months 
// Write a program to read a LoanAmount and MonthlyPayment and Calculate how many months you needs to settle the loan.


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadLoanInstallment(float &LoanAmount,float &MonthlyPayment)
{
    cout << "How to Loan Amount : ";
    cin >> LoanAmount;
    cout << "How to Monthly Payment : ";
    cin >> MonthlyPayment;
}
float CalcuLoanInstallment(float LoanAmount, float MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;
}

int main()
{
    float LoanAmount, MonthlyPayment;
    ReadLoanInstallment(LoanAmount, MonthlyPayment);
    cout <<"\nThe total Month is : " << CalcuLoanInstallment(LoanAmount, MonthlyPayment)<<endl ;
    return 0;
}


//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================


// Problem_48 >> Monthy Loan Installment 
// Write a program to read a LoanAmount and ask you how many months you need to settle the loan , then calculate the monthly installment amount .

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadLoanInstallment(float &LoanAmount,float & HowManyMonthly)
{
    cout << "How to Loan Amount : ";
    cin >> LoanAmount;
    cout << "How Many Need A Monthly : ";
    cin >> HowManyMonthly;
}
float CalcuLoanInstallment(float LoanAmount, float HowManyMonthly)
{
    return LoanAmount / HowManyMonthly;
}

int main()
{
    float LoanAmount, HowManyMonthly;
    ReadLoanInstallment(LoanAmount, HowManyMonthly);
    cout <<"\nThe Total Monthly Payment is : " << CalcuLoanInstallment(LoanAmount, HowManyMonthly)<<endl ;
    return 0;
}



//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_49 >> ATM PIN
// Write a program to read the ATM PIN code from the user, Then check if PIN code = 1234, Then show the balance to user, otherwise print " Wong PIN " and ask the user to enter the PIN again
// Assume User Balance is 7500
// If he enters the wrong pin, I will make him read it again and make the screen red.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPin()
{
    string PinCode;
    cout << "Enter Pin Code : ";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode == ReadPin();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\nWrong Pin Code\n";
            system("color 4F"); // Red
        }

    } while (PinCode !="1234");
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // green
        cout << endl << "Your account Balance is : " << 7500 << endl;
    }
    return 0;
}

//================================================================================================================================================================
//================================================================================================================================================================
//================================================================================================================================================================

// Problem_50 >> ATM PIN 3 Times
// Write a program to read the ATM PIN code from the user, then check if code = 1234, then show the balance to user, otherwise print " Wrong PIN " and ask the user to enter  the PIN again
// #Only  allow user to enter the PIN 3 times, if fails, print " Card is locked "
// - Assume user Balance is 7500

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPin()
{
    string PinCode;
    cout << "Enter Pin Code : ";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    int i = 3;
    string PinCode;
    do
    {
        i--;
        PinCode = ReadPin();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "\nWrong Pin Code You Have \n"<<i <<"More try"<<endl; 
            system("color 4F"); // Red
        }

    } while (PinCode !="1234" && i >=1);
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F"); // green
        cout << endl << "Your account Balance is : " << 7500 << endl;
    }
    else
    {
        cout << "\nYour Card Blocked Call The Bank For Help \n";
    }
    return 0;
}


//================================================================================================================================================================
//========================================================================== THIS IS END =========================================================================
//================================================================================================================================================================
