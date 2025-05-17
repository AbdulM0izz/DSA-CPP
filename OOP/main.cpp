#include <iostream>
using namespace std;

class fruit {
public:

//properties of class or data members
string color;
int count;
};

int main () {
    // this is the object type class name
    fruit apple;
    apple.color = "red";
    apple.count = 5;
    cout << apple.color << apple.count << " ";

    return 0;
}  