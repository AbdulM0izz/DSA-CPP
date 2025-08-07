#include <iostream>
#include <vector>
#include <algorithm> // for sort()
using namespace std;

// Bucket Sort Function
void bucketSort(float arr[], int n) {
    // Step 1: Create n empty buckets
    vector<float> buckets[n];

    // Step 2: Put array elements in the buckets
    for (int i = 0; i < n; i++) {
        int idx = n * arr[i]; // Index in bucket
        buckets[idx].push_back(arr[i]);
    }

    // Step 3: Sort each bucket
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Step 4: Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float value : buckets[i]) {
            arr[index++] = value;
        }
    }
}

// Main Function
int main() {
    float arr[] = {0.42, 0.32, 0.23, 0.52, 0.25, 0.47, 0.51};
    int n = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
