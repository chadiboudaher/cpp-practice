#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:
        string make;
        string model;
        int year;

        Car(string mk, string md, int yr)
            : make(mk), model(md), year(yr) {}

        void start_engine()
        {
            cout << year << " " << make << " " << model << " engine started!";
        }
};


int main()
{
    Car my_car("Toyota", "Corolla", 2020);
    my_car.start_engine();
    return 0;
}
