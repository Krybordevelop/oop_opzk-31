#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    // Конструктор
    Book(string t, string a, int p) {
        title = t;
        author = a;
        pages = p;
        cout << "Конструктор створено книгу \"" << title << "\"\n";
    }

    void printInfo() {
        cout << "Назва: " << title << endl;
        cout << "Автор: " << author << endl;
        cout << "Кількість сторінок: " << pages << endl;
    }

    // Деструктор
    ~Book() {
        cout << "Деструктор об'єкт книги \"" << title << "\" знищено\n";
    }
};

int main() {
    Book myBook("Місто", "Валер'ян Підмогильний", 300);
    myBook.printInfo();
    return 0; 
}