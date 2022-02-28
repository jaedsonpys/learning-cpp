#include <iostream>

using namespace std;

int main() {
    // apenas 10 elementos
    int intArray[10] = {};
    
    for (int i=0; i < 10; i++) {
        intArray[i] = i;
    }

    for (int i=0; i < 10; i++) {
        if(i == 9){
            cout << intArray[i] << endl;
        } else {
            cout << intArray[i] << ", ";
        }
    }

    return 0;
}