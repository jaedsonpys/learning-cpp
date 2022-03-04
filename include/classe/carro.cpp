#include <iostream>
#include "carro.h"
#include <string>

using namespace std;

Car::Car(string _brand, string _model, string _color) {
    brand = _brand;
    model = _model;
    color = _color;
};

void Car::viewCar() {
    cout << "Brand: " << this->brand << endl;
    cout << "Model: " << this->model << endl;
    cout << "Color: " << this->color << endl;
};