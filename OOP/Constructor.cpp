#include <iostream>
using namespace std;

class rectangle {
 public:
 int l;
 int b;

//  rectangle () {
//     // this is default constructor cuz theres no parameter or arguments
//     l = 9;
//     b = 9;
//  }

//  rectangle (int x, int y) {
//     // parameterized constructor
//    l = x;
//    b = y;
//  }

rectangle () {
 // copy constructor
 // this is used to initialize an obj by another existing obj
}
};
int main () {
    // rectangle r1;
    // cout << r1.l << r1.b << " ";

    // rectangle r2 (3,5);
    // cout << r2.l << r2.b << " ";

    return 0;
}