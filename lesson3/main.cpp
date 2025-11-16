#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;

protected:
    int age;

private:
    string socialNumber;

public:
    Person(string n, int a, string sn) {
        name = n;
        age = a;
        socialNumber = sn;
    }

    void setSocialNumber(string sn) {
        socialNumber = sn;
    }

    string getSocialNumber() const {
        return socialNumber;
    }

    void printInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Social Number: " << socialNumber << endl;
    }
};

int main() {
    Person p("Borys", 35, "OLD-12345");
    cout << "Public name: " << p.name << endl;
    cout << "Private social number: " << p.getSocialNumber() << endl;
    p.setSocialNumber("NEW-99999");
    cout << "Updated social number: " << p.getSocialNumber() << endl;
    cout << "\nFull info:\n";
    p.printInfo();
    return 0;
}
