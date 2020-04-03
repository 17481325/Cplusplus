#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float n = 1.2;

    cout << "Enter number: " << flush;

    float input;
    cin >> input;

    if (abs(input - n) < 0.01)
    {
        cout << "Correct" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}
