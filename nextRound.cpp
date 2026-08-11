#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int kValue = 0;
    int count = 0;
    vector<int> input(n);
    for (int i = 0; i < input.size(); i++) {
        cin >> input[i];
        if (i == k-1)
        {
            kValue = input[i];
        }
    }

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] >= kValue && input[i] != 0)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
