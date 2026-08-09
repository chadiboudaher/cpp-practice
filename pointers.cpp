#include <iostream>

using namespace std;

int main()
{
    int value = 42;
    cout << "1. Value of the variable \'value\': " << value << endl;

    cout << "2. Memory address of \'value\' (&value): " << &value << endl;

    int* ptr = &value;

    cout << "3. Address stored in pointer \'ptr\': " << ptr << endl << endl;

    int new_value = 99;
    ptr = &new_value;

    cout << "New value of \'value\' after *ptr = " << *ptr << ": " << *ptr << endl;

    return 0;
}
