// 20 - Randome Small letter, Captal letter , Special , and Digit in order 

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int Start, int End)
{
	int RandomeNum = 0;
	RandomeNum = rand() % (End - Start + 1) + Start;
	return RandomeNum;
}

enum enCharTypes 
{
	Small = 1 , 
	Captal= 2 ,
	Spical= 3 ,
	Digit = 4
};

char GetCharRandom(enCharTypes CharType)
{
	switch (CharType)
	{
	case enCharTypes::Small:
		return char(RandomNumber(97, 122));
		break;
	case enCharTypes::Captal:
		return char(RandomNumber(65, 90));
		break;
	case enCharTypes::Spical:
		return char(RandomNumber(33, 57));
		break;
	case enCharTypes::Digit:
		return char(RandomNumber(48, 57));
		break;
	default:
		break;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	cout << "The Small Letter : " << GetCharRandom(enCharTypes::Small) << endl;
	cout << "The Captal Letter : " << GetCharRandom(enCharTypes::Captal) << endl;
	cout << "The Special Letter : " << GetCharRandom(enCharTypes::Spical) << endl;
	cout << "The Digit Letter : " << GetCharRandom(enCharTypes::Digit) << endl;

	return 0;
}
