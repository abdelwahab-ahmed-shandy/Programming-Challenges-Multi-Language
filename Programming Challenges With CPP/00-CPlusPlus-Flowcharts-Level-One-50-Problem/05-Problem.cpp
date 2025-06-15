/*
* Problem 5
*
* Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation!
* Then print "Hired if his/her" age is grater than 21 and s/he has a driver license ,
* otherwise print "Rejected" Or Hire him/her without conditions!
*
*/

#include <iostream>
#include <string>

using namespace std;

struct stInfoPerson
{
    string Name;
    int age;
    bool hasDrivingLicense;
    bool hasRecommendation;
};

string EnterYourName()
{
    string Name;
    cout << "Enter Your Name : ";
    getline(cin, Name);

    return Name;
}

int EnterYourAge()
{
    int age;
    cout << "Please Enter Your Age: ";
    cin >> age;

    return age;
}

bool ReadHasDrivingLicense()
{
    string input;
    cout << "Do you have a driver’s license? (Yes/No): ";
    cin >> input;

    return (input == "Yes" || input == "yes");
}

bool ReadHasRecommendation()
{
    string input;
    cout << "Do you have a Recommendation !? (Yes/No): ";
    cin >> input;

    return (input == "Yes" || input == "yes");
}

stInfoPerson ReadInfo()
{
    stInfoPerson Info;

    Info.Name = EnterYourName();

    Info.age = EnterYourAge();

    Info.hasDrivingLicense = ReadHasDrivingLicense();

    Info.hasRecommendation = ReadHasRecommendation();

    return Info;
}

bool IsAccepted(stInfoPerson Info)
{
    if (Info.hasRecommendation == true)
        return true;
    else
        return (Info.age > 21 && Info.hasDrivingLicense);
}

void PrintResult(stInfoPerson Info)
{
    if (IsAccepted(Info))
        cout << "\nHired, " << Info.Name << endl;
    else
        cout << "\nRejected," << Info.Name << endl;
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}
