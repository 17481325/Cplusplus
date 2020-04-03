#include <iostream>

using namespace std;

int main()
{
    const string password = "mavis";

    string input;

    do
    {
        cout << "Enter password " << flush;
        cin >> input;

        if (input != password)
        {
            cout << "Access denied" << endl;
        }
    } while (input != password);

    cout << "Access granted" << endl;

    return 0;
}