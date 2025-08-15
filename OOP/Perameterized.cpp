#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};

int main() {
    Rectangle r1(5.0, 3.0);
    cout << "Area: " << r1.area() << endl;
}
