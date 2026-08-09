#include <iostream>

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 100;
    int y = 200;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;

    swapValues(x, y);

    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    return 0;
}
