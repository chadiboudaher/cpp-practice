#include <iostream>

using namespace std;

enum Day
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THRUSDAY,
    FRIDAY,
    SATURDAY,
};

int main()
{
    enum Day day = WEDNESDAY;

    cout << "The integer value of the Wednesday is: ";
    cout << static_cast<int>(day) << endl;

    return 0;
}
