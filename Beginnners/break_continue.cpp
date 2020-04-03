#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "i is : " << i << endl;
        if (i == 5)
        {
            cout << "Exiting loop " << endl;
            break;
        }
        cout << "looping" << endl;
    }

    cout << "Executing code outside loop" << endl;

    return 0;
}