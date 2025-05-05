#include <iostream>
#include <vector>
using namespace std;
int rotatedSortedArray (vector<int> &input) {
    if (input.size() == 1) return input[0];
    int lo = 0 , hi = input.size() - 1;

   
    if (input[lo] < input[hi]) { // for sorted array
        return lo;
    }

    while (lo <= hi) {
        int mid = (lo + hi) / 2;

        if (mid < hi && input[mid] > input[mid + 1]) return mid + 1;
        if (mid > lo && input[mid] < input[mid - 1]) return mid;

        if (input[mid] >= input[lo]) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}
int main () {
    vector<int> input {3,4,5,1,2};
    cout << rotatedSortedArray(input);
    
    return 0;
}
/**
 * A rotated sorted array is a sorted array on which rotation operation has been performed  
 * some numbers of time Given a rotated sorted array find the index of the minimum element in the array follow 0 based indexing 
 * It is guranteed that all the elements in the array are unique
 */