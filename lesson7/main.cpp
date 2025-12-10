#include <iostream>
#include <string>
using namespace std;

namespace school {
    class Student {
    private:
        string name;
        int id;
    public:
        void setData(string studentName, int studentId) {
            name = studentName;
            id = studentId;
        }

        void show() {
            cout << "Ім'я студента: " << name << endl;
            cout << "Номер студентського квитка: " << id << endl;
        }
    };
}

int main() {
    school::Student st;

    st.setData("Борис", 123456);
    st.show();

    return 0;
}
