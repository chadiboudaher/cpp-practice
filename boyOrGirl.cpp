#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string str;
    cin >> str;
    set<char> characters(str.begin(), str.end());
    if (characters.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    } else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
