#include <iostream>
using namespace std;

int main()
{

    string lName;
    string fName;
    string age;
    float balance;

    cout << "Enter your first name: " << flush;
    cin >> lName;

    cout << "Enter your first name: " << flush;
    cin >> fName;

    cout << "Enter your age: " << flush;
    cin >> age;

    cout << "Enter your account balance: " << flush;
    cin >> balance;

    cout << "Your name is : " << fName + " " + lName << endl;
    cout << "You are " << age << " years old" << endl;
    cout << "You have " << balance << " in your account" << endl;

    return 0;
}