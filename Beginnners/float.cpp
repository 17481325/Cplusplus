#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    float val = 76.01234;
    double dval = 76.01234;
    long double ldval = 76.01234;
    cout << scientific << val / 2 << endl;
    cout << fixed << val / 2 << endl; // fixed is from iomanip just to prevent scientific notation
    cout << setprecision(20) << "float " << val / 2 << endl;
    cout << setprecision(20) << "double: " << dval / 2 << endl;
    cout << setprecision(20) << "long double: " << dval / 2 << endl;
    cout << setprecision(20) << val / 2 << endl;
    float val1 = 2;

    // while (1)
    // {
    //     val1 = val1 / (float)2;
    //     cout << val1 << endl;
    // }
    return 0;
}
