#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    string str = "PYnative";

    int vowelCount = 0, consonantCount = 0;

    for (char ch : str) {
        ch = tolower(ch);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }

    cout << "Vowel Count: " << vowelCount << endl;
    cout << "Consonant Count: " << consonantCount;
    return 0;
}
