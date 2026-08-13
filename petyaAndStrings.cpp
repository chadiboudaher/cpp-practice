#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int i = 0;
    while (i < str1.size())
    {
        char char1 = tolower(str1.at(i));
        char char2 = tolower(str2.at(i));
        int int1 = static_cast<int>(char1);
        int int2 = static_cast<int>(char2);
        if (int1 == int2)
        {
            i++;
            continue;
        } else if (int1 < int2)
        {
            cout << -1;
            return 0;
        } else
        {
            cout << 1;
            return 0;
        }
    }
    cout << 0;

    return 0;
}
