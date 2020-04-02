#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your name: " << flush;
    string name;
    string age;
    float balance;

    cin >> name;
    cout << "Enter your age: " << flush;
    cin >> age;
    cout << "Enter your account balance: " << flush;
    cin >> balance;

    cout << "Your name is : " << name << endl;
    cout << "You are " << age << " years old" << endl;
    cout << "You have " << balance << " in your account" << endl;

    return 0;
}