#include <iostream>
using namespace std;

int main()
{
    int val1 = 2;
    int val2 = 4;

    cout << "Enter two values: " << endl;

    int input1;
    int input2;

    cin >> input1;
    cin >> input2;

    if ((input1 == 2) && (input2 == 4))
    {
        cout << "You got both right" << endl;
    }
    else if ((input1 == 2) || (input2 == 4))
    {
        cout << "You got one right" << endl;
    }
    else
    {
        cout << "You got all wrong" << endl;
    }

    return 0;
}