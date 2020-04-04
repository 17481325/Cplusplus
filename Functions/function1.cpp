#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Factorial of " << i << "is : " << factorial(i) << endl;
    }
    return 0;
}

int factorial(int n)
{
    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}