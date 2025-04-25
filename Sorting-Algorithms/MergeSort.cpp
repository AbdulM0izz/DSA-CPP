#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int an = mid - l + 1;
    int bn = r - mid;
    // create two first two sub arrays
    int a [an];
    int b [bn];
    //filling temp arrays
    for ( int i = 0; i < an; i++) {
        a[i] = arr [ l + i];
    }
    for ( int j = 0; j < bn; j++) {
        b[j] = arr [ mid + 1 + j];
    }

    int i = 0, j = 0, k = l; 

    while (i < an  && j < bn ) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        }else{
            arr[k++] = b[j++];
        }
    }

    while (i < an)
    {
        arr[k++] = a[i++];
    }
    
    while (j < bn)
    {
        arr[k++] = a[i++];
    }

}

void mergesort(int arr[], int l, int r) {
    // base case
    if (l >= r) {
        return;
    }

    int mid = (l + r) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    int arr[5] = {20, 30, 10, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, n - 1);
    return 0;
}


 //given two sorted arrays when have merge that two arrays and create one sorted , dived arrays in smaller parts and make sorted array

 // This algorithm is Divide and conquer, *Divide the problem into smaller subproblem* Solve the smaller probelm* Combine the solution to get the final output
