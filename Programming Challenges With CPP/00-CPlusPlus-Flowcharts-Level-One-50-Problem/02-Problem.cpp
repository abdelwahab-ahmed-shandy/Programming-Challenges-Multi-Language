/*
* Problem 2 
* 
* Write a program to ask the user to enter his/hir name and print it on screen . 
* 
*/

#include <iostream>
#include <string>

using namespace std;

string enterYourAsk(string Ask)
{
	cout << Ask << "?!" << endl;

	return Ask;
}

string readAnswer(string Answer)
{
	getline(cin, Answer);
	return Answer;
}

void printYourName(string Name)
{
	cout << "------------------------------------" << endl;
	cout << "Your Name Is : " << Name << endl;
}

int main()
{
	printYourName(readAnswer(enterYourAsk("What's Your Name")));
	return 0;
}
