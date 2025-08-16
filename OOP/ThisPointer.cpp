#include <iostream>
using namespace std;

class Student {
private:
    string name;
public:
    Student(string name) {
        this->name = name; // disambiguates
    }

    void show() {
        cout << "Student name: " << this->name << endl;
    }
};

int main() {
    Student s("Moiz");
    s.show();
    return 0;
}
