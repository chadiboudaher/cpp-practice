#include <iostream>

using namespace std;

int main()
{
    int N = 10;
    cout << "Results up to " << N << endl;

    int evenSum = 0, oddSum = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
        } else
        {
            oddSum += i;
        }
    }
    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Sum of odd numbers: " << oddSum << endl;

    return 0;
}
