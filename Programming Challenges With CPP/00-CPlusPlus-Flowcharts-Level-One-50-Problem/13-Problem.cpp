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

