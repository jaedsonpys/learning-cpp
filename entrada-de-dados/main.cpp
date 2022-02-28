#include <iostream>
#include <string>

using namespace std;

int main() {
    string myName;
    int myAge;
    
    cout << "Digite seu nome: ";

    // se usarmos o std::cin,
    // conseguiriamos obter apenas
    // uma palavra, por isso utilizamos
    // o std::getline.

    getline(cin, myName);

    cout << "Digite sua idade: ";
    cin >> myAge;

    cout << "Nome: " << myName << endl;
    cout << "Idade: " << myAge << endl;
    return 0;
}