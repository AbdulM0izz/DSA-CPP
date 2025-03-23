#include <iostream>
using namespace std;

int f(int n){
    //base case
    if (n <= 9 && n >= 0) return n;

    return f (n / 10) + (n % 10); 
}
int main(){
    // Given an integer . Find the sum of its digits using recursion

    int result = f(1234);
    cout << result;


    return 0;
}