#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;

public:
    Animal(string n) {
        name = n;
    }

    void showInfo() {
        cout << "Ім'я: " << name << endl;
    }
};

class Dog : public Animal {
private:
    string breed;

public:
    Dog(string n, string b) : Animal(n) { // виклик конструктора базового класу
        breed = b;
    }

    void showInfo() {
        Animal::showInfo(); // виклик методу базового класу
        cout << "Порода: " << breed << endl;
    }
};

int main() {
    Dog myDog("Рекс", "Німецька вівчарка");
    myDog.showInfo();

    return 0;
}
