#include <iostream>
using namespace std;
void f(int num , int k) {
    //base case
    if (k == 0) return ;

    //assumption
    f(num, k - 1);
    
    //self work
    cout << (num * k) << " ";
}
int main() {
     //Given a number a print the k multiples of number
     
     f (8,5);



    return 0;
}