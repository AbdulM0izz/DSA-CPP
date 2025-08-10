#include <iostream>
using namespace std;

// Function to partition the array
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose last element as pivot
    int i = low - 1;       // Pointer for smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { // If current element < pivot
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot in correct position
    return i + 1;
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);        // Sort left subarray
        quickSort(arr, pi + 1, high);       // Sort right subarray
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}


// Selection one ele place it on its corrects place 
// all the small ele before it and all the greater ele after it 

// 1 { Partation } 2 { Recursion }