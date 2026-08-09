#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> A(2, vector<int>(2));
    cout << "Enter elements for Matrix A (2x2): " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    vector<vector<int>> B(2, vector<int>(2));
    cout << "Enter elements for Matrix B (2x2): " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }
    int result;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result = A[i][j] + B[i][j];
            cout << result << "\t";
        }
        cout << endl;
    }
    return 0;
}
