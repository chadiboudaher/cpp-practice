#include <iostream>

using namespace std;

class Rectangle
{
public:
    int length;
    int width;
    Rectangle()
    {
        length = 1;
        width = 1;
    }
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
};

int main()
{
    Rectangle rec1;
    Rectangle rec2(12, 4);
    cout << "Custom Rectangle created (" << rec1.length
         << "x" << rec1.width << ")." << endl;
    int area1 = rec1.length * rec1.width;
    cout << "R1 Area: " << area1 << endl;
    cout << "Default Rectangle created (" << rec2.length
         << "x" << rec2.width << ")." << endl;
    int area2 = rec2.length * rec2.width;
    cout << "R2 Area: " << area2 << endl;
    return 0;
}
