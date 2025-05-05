#include <iostream>
#include <vector>
using namespace std;
int firstOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;          // potential answer
            high = mid - 1;        // keep looking left
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}
int lastOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;          // potential answer
            low = mid + 1;         // keep looking right
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}
int main () {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 6};
    int target = 4;

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;
    // simple broot force solution     
    // int arr[5] = {1, 2, 3, 3, 4};     
    // int ans[2];      
    // int target = 3;     
    // int idx = 0;      
     
    // for (int i = 0; i < 5; i++) {     
    //     if (arr[i] == target) {     
    //         ans[idx] = i; // store index     
    //         idx++;     
    //     }
    // }

    // for (int i = 0; i < idx; i++) {
    //     cout << ans[i] << " ";
    // }
}
/***
 * Given an array of integers that is sorted in asending order find the 
 * first and the last position of given target element in sorted array if not return -1 -1
 */
