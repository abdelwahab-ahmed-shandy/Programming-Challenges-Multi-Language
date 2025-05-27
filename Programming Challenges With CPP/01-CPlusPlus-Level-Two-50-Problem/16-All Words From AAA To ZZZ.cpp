// 16 - All Words From AAA To ZZZ

#include <iostream>
using namespace std;

void AllWords()
{
	for (char i = 65 ; i <= 90; i++)
	{
		for (char J = 65 ; J <= 90 ; J++)
		{
			for (char L = 65; L <= 90; L++)
			{
				cout << i << J << L << endl;
			}
		}
	}
}

int main()
{
	AllWords();
	return 0;
}

//=============================================================================================================================================
//=============================================================================================================================================
// 16 - All Words From AAA To ZZZ

#include <iostream>

using namespace std;

void PrintWordsFromAAAtoZZZ()
{
	string word = "";
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			for (int k = 65; k <= 90; k++)
			{
				word = word + char(i);
				word = word + char(j);
				word = word + char(k);
				cout << word << endl;
				word = "";
			}
		}
	cout << "\n____________________________\n";
	}
}

int main()
{
	PrintWordsFromAAAtoZZZ();
	return 0;
}

