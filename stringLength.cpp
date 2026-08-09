#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "madam";

    int i = 0, j = str.size() - 1;

    while (i <= j) {
        if (str[i] == str[j]) {
            i++;
            j--;
            continue;
        } else {
            cout << "\'" << str << "\' IS NOT a palindrome.";
        }
    }

    cout << "\'" << str << "\' IS a palindrome";
    return 0;
}
