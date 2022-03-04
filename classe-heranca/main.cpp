#include <iostream>
#include <string>

using namespace std;

class Human {
    protected: // acessável apenas por herança
        string name;
        int age;
    public: // acessável por todos
        Human(string _name, int _age);

        void printID() {
            cout << "Nome: " << this->name << endl;
            cout << "Idade: " << this->age << endl;
        };

        void changeName(string newName) {
            this->name = newName;
            cout << "Your name has changed." << endl;
        };

        void changeAge(int newAge) {
            this->age = newAge;
            cout << "Your age has changed." << endl;
        };
};

Human::Human(string _name, int _age) {
    name = _name;
    age = _age;
}

class Bank: public Human {
    private:
        int accountNumber;
        int cvCode;
        string password;
    public:
        Bank(string _name, int _age, string _password): Human(_name, _age) {
            this->name = name;
            this->age = age;
            this->password = password;
            this->cvCode = 123;
        };

        void getAccountInfo();
};

void Bank::getAccountInfo() {
    cout << "Informações: " << endl;
    cout << "Nome: " << name << endl;
    cout << "Idade: " << age << endl;
    cout << "Número da conta: " << accountNumber << endl;
    cout << "CV Code: " << cvCode << endl;
}

int main() {

    Bank myAccount = Bank("Jaedson", 18, "mypw");
    myAccount.printID();
    myAccount.getAccountInfo();

    return 0;
}