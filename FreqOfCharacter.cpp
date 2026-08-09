#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string str = "Programming in CPP";

    cout << "string: Programming in CPP" << endl;
    cout << "Character Frequencies:" << endl;

    // Create a map
    map<char, int> char_counts;

    for (char c : str) {
        if(isalpha(c)) {
            char_counts[tolower(c)]++;
        }
    }

    for (const auto& pair : char_counts) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }
    return 0;
}
