#include <iostream>
#include <string>
#include <algorithm>

enum WindowMessages {
    WM_OPEN_FILE,
    WM_SAVE_FILE,
    WM_ABOUT,
    WM_QUIT,
    WM_UNKNOWN
};

WindowMessages translateToMessage(std::string input) {
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
    
    if (input == "open") return WM_OPEN_FILE;
    if (input == "save") return WM_SAVE_FILE;
    if (input == "about") return WM_ABOUT;
    if (input == "exit") return WM_QUIT;
    return WM_UNKNOWN;
}

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    std::string userInput;
    bool isRunning = true;

    std::cout << "--- Windows Application Emulator (Message Driven) ---" << std::endl;
    std::cout << "Доступні команди (повідомлення): open, save, about, exit" << std::endl;

    // Головний цикл повідомлень (Message Loop)
    while (isRunning) {
        std::cout << "\nЧекаю на повідомлення від користувача... > ";
        std::cin >> userInput;

        WindowMessages msg = translateToMessage(userInput);

        switch (msg) {
            case WM_OPEN_FILE:
                std::cout << "[MSG RECEIVED]: WM_OPEN_FILE. Відкриваємо провідник..." << std::endl;
                break;
            case WM_SAVE_FILE:
                std::cout << "[MSG RECEIVED]: WM_SAVE_FILE. Дані збережено на диск." << std::endl;
                break;
            case WM_ABOUT:
                std::cout << "[MSG RECEIVED]: WM_ABOUT. Автор програми: Боря. Версія 1.0" << std::endl;
                break;
            case WM_QUIT:
                std::cout << "[MSG RECEIVED]: WM_QUIT. Завершення роботи програми..." << std::endl;
                isRunning = false;
                break;
            case WM_UNKNOWN:
                std::cout << "[MSG RECEIVED]: Невідоме повідомлення. Подія проігнорована." << std::endl;
                break;
        }
    }

    std::cout << "Застосунок завершив роботу з кодом 0." << std::endl;
    return 0;
}