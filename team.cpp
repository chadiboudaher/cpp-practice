#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int count = 0;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a == 0 && b == 0) || (a == 0 && c == 0) || (c == 0 && b == 0)) {
            continue;
        } else {
            count++;
        }
    }
    cout << count;

}
