#include <iostream>
using namespace std;

int partation (int arr[], int s , int e) {
    int pivot = arr[s];

    int cnt = 0;
    for (int i=s+1; i<=e; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    //place pivot at right place
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right part
    int i=s , j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
       while (arr[i] <= pivot)
       {
        i++;
       }

       while (arr[j] > pivot)
       {
        j--;
       }
       
       if (i < pivotIndex && j > pivotIndex) {
        swap (arr[i++], arr[j--]);
       }
       
    }
    return pivotIndex;

}

void quicksort (int arr[], int s, int e) {
    // base case
    if (s >= e) {
        return;
    }
    // partation 
    int p = partation (arr , s , e);

    //left part sort
    quicksort (arr , s , p-1);

    //right part sort
    quicksort (arr , p+1 , e);
   
}
int main () {
   int arr [5] = {3,2,5,4,1};
   int n = 5;

   quicksort (arr , 0 , n-1);

   for (int i=0; i<n; i++) {
    cout << arr[i] << " ";
   }cout << endl;

    return 0;
}

// Selection one ele place it on its corrects place 
// all the small ele before it and all the greater ele after it 

// 1 { Partation } 2 { Recursion }