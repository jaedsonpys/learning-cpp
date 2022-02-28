#include <iostream>

using namespace std;

int main() {
    int numberArray[] = {1, 2, 3, 4, 5};

    // filtrando numeros pares
    for(int i = 0; i < 5; i++) {
        if(numberArray[i] % 2 == 0) {
            cout << numberArray[i] << " ";
        }
    }

    cout << "\n";
    return 0;
}