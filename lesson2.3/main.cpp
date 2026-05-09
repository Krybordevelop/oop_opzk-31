#include <iostream>
#include <string>

class Laptop {
private:
    // Інкапсульовані дані (private)
    std::string brand;
    std::string cpu;
    int ram_gb;
    double price;

public:
    Laptop(std::string b, std::string c, int r, double p) {
        brand = b;
        cpu = c;
        ram_gb = r;
        price = p;
    }

    void setPrice(double new_price) {
        if (new_price > 0) price = new_price;
    }

    std::string getBrand() { return brand; }

    void displayInfo() {
        std::cout << "--- Інформація про пристрій ---" << std::endl;
        std::cout << "Марка: " << brand << std::endl;
        std::cout << "Процесор: " << cpu << std::endl;
        std::cout << "Оперативна пам'ять: " << ram_gb << " GB" << std::endl;
        std::cout << "Ціна: $" << price << std::endl;
        std::cout << "-------------------------------" << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Laptop myLaptop("Lenovo IdeaPad", "AMD Ryzen 7", 16, 850.50);

    myLaptop.displayInfo();

    std::cout << "\nОновлення ціни..." << std::endl;
    myLaptop.setPrice(799.99);

    myLaptop.displayInfo();

    return 0;
}