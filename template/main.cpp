#include <iostream>

using namespace std;

/**
 * template "cria" um novo
 * tipo de dado.
 */

template <class Any>
void print(Any any, string end = "\n") {
    cout << any << end;
    if(end != "\n") {
        cout << endl;
    }
}

int main() {
    print("Hello World!");
    print("I'm C++ programmer", "!");
    return 0;
}