#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int count = 0;
    while(input--)
    {
        string a;
        cin >> a;

        if (a[0] == 'X')
        {
            if (a.substr(1, a.size()) == "++")
            {
                count++;
            } else
            {
                count--;
            }
        } else if (a[a.size() - 1] == 'X')
        {
            if (a.substr(0, a.size() - 1) == "++")
            {
                count++;
            } else
            {
                count--;
            }
        }
    }

    cout << count;
    return 0;
}
