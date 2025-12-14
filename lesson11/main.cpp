#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Створення вектора з числами
    vector<int> numbers = {5, 2, 8, 2, 3, 5, 1, 8};

    cout << "Початковий вектор: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // Сортування елементів
    sort(numbers.begin(), numbers.end());

    cout << "Після сортування: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    // Видалення повторюваних елементів
    auto last = unique(numbers.begin(), numbers.end());
    numbers.erase(last, numbers.end());

    cout << "Після видалення повторів: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
