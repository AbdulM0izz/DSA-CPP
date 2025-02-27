#include <iostream>
using namespace std;
int main(){
    int n = 10;
    float y = 10.5;
    cout << &n <<" " << endl; //& address of opertor

    int *ptr = &n; //making pointer to store the address of n
    cout << ptr;

    //float pointer that can store the address of float y variable
    float *ptr2 = &y; 
    cout << ptr2 << endl;
 
     //string pointer that can store the address of float y variable
    string name = "Moiz";
    string *ptr3 = &name;
    cout << ptr3 <<" string " <<endl;
    cout << *ptr3 << endl; //prints the value the name string






    return 0;
}