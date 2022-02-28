#include <iostream>

using namespace std;

int main() {
    int number1;
    int number2;

    cout << "Digite o primeiro valor: ";
    cin >> number1;

    cout << "Digite o segundo valor: ";
    cin >> number2;

    float soma = number1 + number2;
    float multi = number1 * number2;
    float divi = number1 / number2;
    float resto = number1 % number2;

    cout << "Soma: " << soma << endl;
    cout << "Multiplicação: " << multi << endl;
    cout << "Divisão: " << divi << endl;
    cout << "Resto de divisão: " << resto << endl; 

    return 0;
}