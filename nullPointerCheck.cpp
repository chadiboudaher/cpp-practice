#include <iostream>

using namespace std;

int main() {
    int* safe_ptr = nullptr;

    if (safe_ptr == NULL) {
        cout << "Pointer is null, cannot dereference." << endl;
    }

    int value = 77;
    safe_ptr = &value;

    cout << "Pointer is now valid. Dereferenced value: " << *safe_ptr << endl;
    return 0;
}
