#include <string>

using namespace std;

class Car {
    private:
        string model;
        string color;
        string brand;
    public:
        Car(string _brand, string _model, string _color);
        void viewCar();
};