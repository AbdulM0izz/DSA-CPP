#include <iostream>
#include <vector>
using namespace std;
int binarysearchRecursive (vector<int> input, int target, int lo, int hi) {
   // base case
   if (lo > hi) return -1;

// calculate mid 
    int mid = (hi + lo) / 2;

    if (input [mid] == target) return mid;

    if (input [mid] < target) {
        return binarysearchRecursive (input , target , mid + 1 , hi);
    } else {
        return binarysearchRecursive (input , target ,lo ,mid-1);
    }
    }
int main () {
    vector<int> input {10,13,14,16,20};
    int n = input.size();
    int target = 16;

    cout << binarysearchRecursive(input, target, 0, n - 1);
    
   
    return 0;
}
/***
 * Time complexicty O (log n)
 * Space : O (log n)
 */
