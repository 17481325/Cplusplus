#include <iostream>

using namespace std;

int main()
{

    cout << "1. \tAdd new rocord" << endl;
    cout << "2. \tDelete from rocords" << endl;
    cout << "3. \tSearch records " << endl;

    cout << "Select one option " << flush;

    int input;
    cin >> input;

    if (input == 1)
    {
        cout << "New record added" << endl;
    }
    else if (input == 2)
    {
        cout << "You are not authorized to delete from records" << endl;
    }
    else
    {
        cout << "Entry was not found" << endl;
    }

    return 0;
}
