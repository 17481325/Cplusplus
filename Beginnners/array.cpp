#include <iostream>
#include <string>
using namespace std;

int main()
{
    int values[4];
    for (int i = 0; i < 4; ++i)
    {
        values[i] = i;
    }

    for (int i = 0; i < 4; ++i)
    {
        cout << "i is : " << i << endl;
    }
    return 0;
}