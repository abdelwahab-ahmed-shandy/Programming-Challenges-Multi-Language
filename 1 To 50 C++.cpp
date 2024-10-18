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

