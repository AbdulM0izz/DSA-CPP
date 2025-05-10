#include <iostream>
#include <vector>
using namespace std;
int duplicateSorted (vector<int> input , int target) {
    int lo = 0, hi = input.size() -1;
    if (lo == hi) {
        lo++;
        hi--;
    }
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (input[mid] == target) return mid;

        if (input[mid] >= input[lo]) {
            if (target >= input[lo] && target <= input[mid]) {
                hi = mid -1; 
            }else {
                lo = mid + 1;
            }
        } else {
            if (target <= input[mid] && target >= input[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    return -1;
}
int main () {
     int n;
    cin >> n;
    vector<int> input(n);
    for (int i=0; i<n; i++) {
        cin >>input[i];
    }cout << endl;

    int target;
    cin  >> target;

   cout <<  duplicateSorted(input, target);

    return 0;
}
/**
 * Search element in rotated sorted array with duplicate elements; Return 1 if found else -1;
 */