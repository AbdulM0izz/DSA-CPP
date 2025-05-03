#include <iostream>
using namespace std;
// int squareroot (int x) { 
//     //simple solution
//     int ans = -1;
//     for (int i=0; i<=x; i++) {
//         if (i * i <= x) {
//             ans = i;
//         }else {
//             break;
//         }
//     }
//     return ans;
// }

int squareroot (int x) {
    int lo = 0;
    int hi = x;
    int ans = -1;

    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (mid * mid == x) {
            return mid;
        }else if (mid * mid < x) {
            mid = ans;
            lo = mid + 1;
        }else {
            hi = mid - 1; 
        }
    }
    return ans;
    
}
int main () {
    cout << squareroot(4);


    return 0;
}
/**
 * Find the sqrt of the given non negative value x. round it off to the nearest floor integer value
*/