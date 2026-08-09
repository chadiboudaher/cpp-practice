#include <iostream>
#include <string>

using namespace std;

int main() {
    string main_string = "PYnative c++ Exercises";
    string sub_string = "c++";

    int sub_len = sub_string.size();
    int main_len = main_string.size();

    if (sub_len > main_len) {
        cout << "Sub string not found";
    }

    string sub;
    for (int i = 0; i < main_len - sub_len; i++) {
        sub = main_string.substr(i, sub_len);
        if (sub == sub_string) {
            cout << "Sub string found!" << endl;
            cout << "Starting index: " << i;
        }
    }

    return 0;
}
