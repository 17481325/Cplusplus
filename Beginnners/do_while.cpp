#include <iostream>

using namespace std;

int main()
{
    const string password = "mavis";
    string input;
    cin >> input;
    do
    {
        cout << "Enter password" << flush;
    } while (input != password);

    return 0;
}