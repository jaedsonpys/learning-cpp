#include <iostream>

using namespace std;

int main() {
    int number;

    while (number < 10) {
        number++;
    }

    cout << number << endl;

    // do while
    // executa primeiro e depois verifica a condição
    do {
        number++;
    } while (number < 10);

    cout << number << endl;

    return 0;
}