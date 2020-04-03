#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int x = 1000;
    long int y = 1000;
    unsigned int x1 = 1000;
    unsigned short x2 = 2;

    for (int i = 0; i < 10; i++)
    {
        x = x * x;
        y = y * y;
        x1 = x1 * x1;
        x2 = x2 * 2;
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "x1: " << x1 << endl;
        cout << "x2: " << x2 << endl;
    }
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    cout << "size of short: " << sizeof(x2) << endl;
    cout << "size of int : " << sizeof(x) << endl;
    cout << "size of long : " << sizeof(y) << endl;
    return 0;
}
