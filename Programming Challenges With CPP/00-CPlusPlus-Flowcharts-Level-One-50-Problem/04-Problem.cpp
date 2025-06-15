/*
* Problem 4
* Write a program to ask the user to enter his/her Age and Driver license Then print "Hired" if his/her age is grater than 21 and s/he has a driver license,
* otherwise print "Rejected"
*
*/

#include <iostream>
#include <string>

using namespace std;

struct stInfoPerson
{
    string Name;
    int Age;
    bool HasDrivingLicense;
};

bool ReadHasDrivingLicense()
{
    string input;
    cout << "Do you have a driver’s license? (Yes/No): ";
    cin >> input;

    return (input == "Yes" || input == "yes");
}

stInfoPerson ReadInfo()
{
    stInfoPerson Info;

    cout << "Enter Your Name: ";
    //cin.ignore(); 
    getline(cin, Info.Name);

    cout << "Please Enter Your Age: ";
    cin >> Info.Age;

    Info.HasDrivingLicense = ReadHasDrivingLicense();

    return Info;
}

bool IsAccepted(stInfoPerson Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfoPerson Info)
{
    if (IsAccepted(Info))
        cout << "\nHired, " << Info.Name << endl;
    else
        cout << "\nRejected, " << Info.Name << endl;
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}
