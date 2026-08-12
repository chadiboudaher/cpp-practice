#include <iostream>

using namespace std;

int main()
{
    int N = 20;
    cout << "Even numbers between 1 and 20 are: ";
    for (int k = 1; k <= N; k++)
    {
        if (k % 2 == 0)
        {
            cout << k << " ";
        }
    }
    return 0;
}
