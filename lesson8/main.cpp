#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Введіть перше число: ";
    cin >> a;

    cout << "Введіть друге число: ";
    cin >> b;

    try {
        if (b == 0) {
            throw "division_by_zero"; 
        }

        double result = a / b;
        cout << "Результат: " << result << endl;
    }
    catch (const char* error) {
        cout << "Помилка: ділення на нуль неможливе" << endl;
    }

    return 0;
}