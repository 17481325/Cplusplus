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

    switch (input)
    {
    case 1:
        cout << "New record added" << endl;
        break;

    case 2:
        cout << "You are not authorized to delete from records" << endl;
        break;

    case 3:
        cout << "Entry was not found" << endl;

    default:
        break;
    }
    return 0;
}
