#include <iostream>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long length_count = (n + a - 1) / a;
    long long width_count = (m + a - 1) / a;

    long long total_count = length_count * width_count;

    cout << total_count;
    return 0;
}
