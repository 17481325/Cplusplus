#include <iostream>

#include "utils.h" // The prototype for fibb is include in this header file

using namespace std;

int main()
{
    for (int i = 1; i < 100; i++)
    {
        cout << "Fibb of : " << i << " is : " << fibb(i) << endl;
    }
    return 0;
}

long int fibb(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return fibb(n - 1) + fibb(n - 2);
    }
}