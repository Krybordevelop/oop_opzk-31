#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Введіть кількість студентів: ";
    cin >> n;

    string* names = new string[n];

    cout << "Введіть імена студентів:\n";
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Студент " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    cout << "\nСписок студентів:\n";
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    delete[] names;

    return 0;
}
