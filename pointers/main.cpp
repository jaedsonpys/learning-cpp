#include <iostream>

using namespace std;

/**
 * um ponteiro é um tipo de dado
 * cujo valor se refere diretamente
 * a outro valor alocado em outra
 * área da memória, através de seu
 * endereço.
 * 
 * Para ver a posição de memória:
 * &varivel
 */

int main() {

    int numero = 10;
    int *ponteiro; // varival do tipo "pointer"

    ponteiro = &numero; // guardando o endereço de memória

    cout << numero << endl;
    cout << &numero << endl;
    cout << ponteiro << endl;

    // acessando o valor da posição de memória
    cout << *ponteiro << endl;

    // mudando valor do ponteiro
    *ponteiro = 15;

    cout << *ponteiro << endl;

    return 0;
}