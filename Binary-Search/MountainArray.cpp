#include <iostream>
#include <vector>
using namespace std;
/**
 * Time : O(log n)
 * Space: O(1)
 */
int peakinmountainarray (vector<int> &input) {
    int lo = 0 , hi = input.size() -1 , ans = -1;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (input[mid] > input[mid -1]) {
            //we are at increasing curve 
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid -1;
        }
      
    }
    return ans;
    
}
int main () {
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i=0; i<n; i++) {
        cin >> input [i];
    }cout << endl;

   cout <<  peakinmountainarray(input) << " ";

    return 0;
}
/**
 * Binaray search to find peak element
 * Given a mountain array a of length greater then 3 return the index i such that arr[0] < arr[i] etc this index is known as the peak index
 */