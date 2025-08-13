#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << m.add(5, 10) << endl;      // calls int version
    cout << m.add(2.5, 3.7) << endl;   // calls double version
}
