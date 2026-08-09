#include <iostream>

int main()
{
    int x = 42;
    int* p1 = &x;
    int** p2 = &p1;

    std::cout << "The value accessed via double pointer is: " << **p2;
    return 0;
}
