#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int num = static_cast<int>(word.at(0));
    int charIdx = num - 32;
    if (num < 97)
    {
        cout << word;
        return 0;
    }
    cout << static_cast<char>(charIdx) << word.substr(1, word.size());
    return 0;
}
