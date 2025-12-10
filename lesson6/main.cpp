#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void move() {
        cout << "The vehicle is moving" << endl;
    }
};

class Car : public Vehicle {
public:
    void move() override {
        cout << "The car is moving on the road" << endl;
    }
};

class Bicycle : public Vehicle {
public:
    void move() override {
        cout << "The bicycle is moving on the bike lane" << endl;
    }
};

int main() {
    Vehicle* vehicles[3];

    vehicles[0] = new Vehicle();
    vehicles[1] = new Car();
    vehicles[2] = new Bicycle();

    for (int i = 0; i < 3; i++) {
        vehicles[i]->move();
    }

    for (int i = 0; i < 3; i++) {
        delete vehicles[i];
    }

    return 0;
}
