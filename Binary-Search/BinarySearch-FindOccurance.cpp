#include <iostream>
#include <vector>
using namespace std;

int firstoccurance (vector<int> input, int target) {
   int lo = 0;
   int hi = input.size() -1;
   int ans = -1;

   while (lo <= hi)
   {
     int mid = (lo + hi) / 2;
     if (input[mid] == target) {
        ans = mid;

        // now check the more best possible ans
        hi = mid -1;
     }else if (input[mid] > target) {
        hi = mid -1;
     }else {
        lo = mid + 1;
     }
   }

   return ans;
}
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i < n; i++) {
     cin >> arr [i];
    }

    int target;
    cin >> target;

  cout << firstoccurance (arr, target);
 
    return 0;
}
/**
 * Find the first occurance of the given element x, given that the given array is sorted
 * if no occurance is found return -1
 * 
 * if solve this with simple brute force t complexicty is O(n)
 */