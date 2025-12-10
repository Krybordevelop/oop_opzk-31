#include <iostream>
using namespace std;

int main() {
    int arr[5];         
    int* p = arr;        

    cout << "Введіть 5 цілих чисел:\n";
    for (int i = 0; i < 5; i++) {
        cin >> *(p + i); 
    }

    cout << "\nЕлементи масиву:\n";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }

    cout << endl;
    return 0;
}
