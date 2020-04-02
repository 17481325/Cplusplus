#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int x = 1000;
    for (int i = 0; i < 10; i++)
    {
        x = x * x;
        cout << x << endl;
    }
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    return 0;
}
