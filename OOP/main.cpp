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

    //dynamically access by this we didnt get the obj we get pointer var

    // fruit *banana = new fruit();
    // banana -> color = "Yellow";
    // banana -> count = 5;


    return 0;
}   