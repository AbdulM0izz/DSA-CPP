#include <iostream>
using namespace std;
// simple iterative solution
// void f (int n){

//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         if (i % 2 == 0) {
//             sum += i;  
//         } else {
//             sum -= i;  
//         }
//     }
//     cout << sum;`
// }

// Recursive
   int  f (int n){
    //base case
    if (n==0) return 0;

    //assumption
    return f(n-1) + ((n%2==0) ? (-n):(n));
   
   }
int main() {
    // Print the sum of natural numbers with alternate sign
       cout << f (10);
    
    return 0;
}
