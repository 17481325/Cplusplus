#include <iostream>
#include "utils.h" // The prototype for fibb is include in this header file

using namespace std;

int main()
{
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