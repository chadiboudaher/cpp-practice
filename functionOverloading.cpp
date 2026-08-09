#include <iostream>
#include <cmath>

using namespace std;

double calculateArea(double radius) {
    double area = pow(radius, 2) * M_PI;
    return area;
}

double calculateArea(double length, double width) {
    double area = length * width;
    return area;
}

int main() {

    cout << "Area of Circle (Radius 5.0) = " << calculateArea(5.0) << endl;
    cout << "Area of Ractangle (8.0 x 4.0) = " << calculateArea(8.0, 4.0) << endl;
    return 0;
}
