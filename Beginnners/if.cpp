#include <iostream>

using namespace std;

int main()
{
    string storedPassword = "Hello";

    cout << "Enter your password > " << flush;
    string password;
    cin >> password;

    if (storedPassword == password)
    {
        cout << "access granted" << endl;
    }
    // else if ()
    // {
    //     cout << "Enter something " << flush;
    // }
    else
    {
        cout << "access denied" << endl;
    }

    //cout << "'" << password << "'" << endl;
    /* code */
    return 0;
}
