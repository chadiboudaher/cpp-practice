#include <iostream>

using namespace std;

int main()
{
    int N = 5;
    cout << N << "! (Factorial of " << N << ") is : ";
    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }
    cout << factorial;
    return 0;
}
