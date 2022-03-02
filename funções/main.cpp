#include <iostream>
#include <string>

using namespace std;

/**
 * É possível passar a referência
 * de uma variável para uma função
 * utilizando "&":
 * 
 * void test(string &text) {}
 */

void print(string text, string end="\n") {
    cout << text << end;
    if(end != "\n") {
        cout << endl;
    }
}

int main() {
    print("Hello World!");
    print("I'm C++ programmer", "!");
    return 0;
}