// If we incriment the pointer like &ptr + 1; pointer varible move to the very next var and start pointing that var;

#include <iostream>
using namespace std;
int main(){

    int x=10;
    int *ptr = &x;
    // cout << "Size of x " << sizeof(x) << endl;
    cout << ptr << endl;
    cout << (ptr + 1) << endl; // this is increment by 4 in hexadecimal cuz int is 4 bites;

    
 



    return 0;
}