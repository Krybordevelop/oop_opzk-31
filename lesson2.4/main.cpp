#include <iostream>
#include <string>

class Entity {
public:
    virtual void action() {
        std::cout << "Entity performs a generic action." << std::endl;
    }

    virtual ~Entity() {
        std::cout << "Entity destroyed." << std::endl;
    }
};

class Scanner : virtual public Entity {
public:
    void action() override {
        std::cout << "Scanner: Scanning document..." << std::endl;
    }
    ~Scanner() { std::cout << "Scanner destroyed." << std::endl; }
};

class Printer : virtual public Entity {
public:
    void action() override {
        std::cout << "Printer: Printing document..." << std::endl;
    }
    ~Printer() { std::cout << "Printer destroyed." << std::endl; }
};

class MFP : public Scanner, public Printer {
public:
    void action() override {
        std::cout << "MFP (Multi-Function Printer) is ready to scan and print." << std::endl;
    }
    ~MFP() { std::cout << "MFP destroyed." << std::endl; }
};

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    Entity* myDevice = new MFP();

    std::cout << "--- Тест поліморфізму ---" << std::endl;

    myDevice->action();

    std::cout << "------------------------" << std::endl;

    delete myDevice;

    return 0;
}