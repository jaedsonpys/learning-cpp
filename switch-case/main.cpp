#include <iostream>

using namespace std;

int main() {
    int myNumber = 45;

    switch (myNumber)
    {
    case 25:
        cout << "Number is 25." << endl;
        break;

    case 35:
        cout << "Number is 35." << endl;
        break;
    case 45:
        cout << "Number is 45." << endl;
        break;
    
    default:
        // se nenhuma das condições forem atendidas
        break;
    }

    return 0;
}