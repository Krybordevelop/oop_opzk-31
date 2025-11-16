#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    string color;

public:
    Car(string m, int y, string c) {
        model = m;
        year = y;
        color = c;
    }

    void changeColor(string newColor) {
        color = newColor;
    }

    void showInfo() {
        cout << "Модель: " << model << endl;
        cout << "Рік випуску: " << year << endl;
        cout << "Колір: " << color << endl << endl;
    }
};

int main() {
    Car car1("Toyota", 2024, "Чорний");
    Car car2("Tesla", 2023, "Сірий");

    cout << "Інформація про автомобілі:" << endl;
    car1.showInfo();
    car2.showInfo();

    car2.changeColor("Чорний");

    cout << "Після зміни кольору Tesla:" << endl;
    car2.showInfo();

    return 0;
}