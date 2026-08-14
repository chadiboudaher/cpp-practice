#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> nums;

    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i) != '+')
        {
            nums.push_back(s.at(i) - '0');
        }
    }

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << "+";
    }

    return 0;
}
