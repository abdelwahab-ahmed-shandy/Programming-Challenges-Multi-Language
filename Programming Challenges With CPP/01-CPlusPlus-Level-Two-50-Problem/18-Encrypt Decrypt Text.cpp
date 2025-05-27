// 18 - Encrypt / Decrypt Text

#include <iostream>
#include <string>
using namespace std;

string ReadText()
{
	string Text;
	cout << "Enter Your Text : ";
	getline(cin, Text);
	return Text;
}

string EncrptText(string Text, int Key)
{
	for (int i = 0; i <  Text.length(); i++)
	{
		Text[i] = char((int)Text[i] + Key);
	}
	return Text;
}

string DecryptText(string Text, int Key)
{
	for (int i = 0; i < Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - Key);
	}
	return Text;
}


int main()
{
	//Key Encryption
	const int Key = 7;

	string Text = ReadText();
	string TextAfterEncry = EncrptText(Text, Key);
	string TextAfterDncry = DecryptText(TextAfterEncry, Key);

	cout << "The Text Before Encryption : " << Text << endl;
	cout << "The Text After Encryption : " << TextAfterEncry << endl;
	cout << "The Text After Decryption : " << TextAfterDncry << endl;

	return 0; 
}

