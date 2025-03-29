#include <iostream>
using namespace std;

void  f (int n){
    if (n == 0) return;
    f(n-1);
    cout << n << " ";
}

int main(){
    //Given num n find the increasing sequence from 1 to n without any loop
   int n=4;
    f(n);



    return 0;
}