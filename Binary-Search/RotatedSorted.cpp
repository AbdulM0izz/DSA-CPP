#include <iostream>
#include <vector>
using namespace std;
int sortedrotated (vector<int> &input, int target) {
    int lo = 0 , hi = input.size()-1;

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
    /***
     * Time: O (log n)
     * Space: 0(1)
     */
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

   cout <<  sortedrotated(input, target);

    return 0;
}
/***
 * Given sorted rotated array of integers which contains dictint elements and integer target. Find the index of it if it is in the array otherwise return -1;
 */