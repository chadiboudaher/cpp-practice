#include <iostream>

using namespace std;

int main()
{
    long long number = 7568;
    int count = 0;
    cout << "Enter an integer: " << number << endl;
    cout << "The number " << number << " has ";
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    cout << count << " digits.";
    return 0;
}
