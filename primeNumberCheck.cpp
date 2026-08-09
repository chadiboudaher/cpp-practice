#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N = 23;
    bool isPrime = true;

    if (N <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(N); i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << N << " is a PRIME number." << endl;
    } else {
        cout << N << " is NOT a prime number." << endl;
    }

    return 0;
}
