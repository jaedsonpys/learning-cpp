#include <iostream>
#include <string>

using namespace std;

class Human {
    public: // acessável fora da classe
        string name;
        int age;

        Human(string name, int age);
        ~Human(); // desconstrutor

        void printID() {
            cout << "Nome: " << this->name << endl;
            cout << "Idade: " << this->age << endl;
        };

        void changeAge(int newAge) {
            this->age = newAge;
            cout << "Your age has changed." << endl;
        };

        // para adicionar um método fora da classe,
        // é necessário que o método esteja declarado.
        void changeName(string name);
    private: // acessável apenas dentro do escopo da classe
        int humanId;
};

// adicionando método fora da classe
void Human::changeName(string newName) {
    this->name = newName;
    cout << "Your name has changed." << endl;
}

Human::Human(string name, int age) {
    this->name = name;
    this->age = age;
};

Human::~Human() {
    cout << "The object has been deleted." << endl;
}


int main() {

    Human people("Elliot", 25);
    people.printID();

    people.changeName("Mr.Robot");
    people.changeAge(45);
    people.printID();

    return 0;
}