#include <iostream>

using namespace std;

int main()
{
    // Create a rectangular board of MxN squares
    int m, n;
    cin >> m >> n;

    int count = 0;
    for (int i = 1; i < m * n; i += 2)
    {
        count++;
    }

    cout << count;
    return 0;
}
