#include <iostream>
#include "math_utils.h" // Підключаємо наш модуль

int main() {
    int x = 15;
    int y = 27;

    // Використання функції з іншого модуля
    int result = addNumbers(x, y);

    std::cout << "--- Результат роботи програми ---" << std::endl;
    std::cout << "Сума чисел " << x << " та " << y << " дорівнює: " << result << std::endl;

    return 0;
}