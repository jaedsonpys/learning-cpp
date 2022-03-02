#include <iostream>
#include <string>

using namespace std;

struct Human {
public:
    string name = "Jaedson";
    int age = 14;
private:
    string password = "pw";
};

int main() {
    Human people;
    
    cout << "Name: " << people.name << endl;
    cout << "Age: " << people.age << endl;
    return 0;
}