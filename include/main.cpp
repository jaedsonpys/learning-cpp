#include <iostream>
#include <string>
#include "classe/carro.h"

using namespace std;

int main() {

    Car mycar = Car("Porsche", "911", "black");
    mycar.viewCar();

    return 0;
}