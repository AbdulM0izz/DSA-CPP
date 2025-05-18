#include <iostream>
using namespace std;
class rectangle {
    // it call when obj is deleted
    public:
    ~rectangle() {
        cout << "Destructor is called" << endl;
    }
};
int main () {
    rectangle *r1 = new rectangle;
    delete r1; // delete is used with on pointer 
    return 0;
}