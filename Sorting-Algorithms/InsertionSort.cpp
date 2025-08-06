// #include <iostream>
// #include <vector>
// using namespace std;

// void insertionsort (vector<int> &v) {
//     int n = v.size();
//     for (int i=1; i<n; i++) {
//          int temp = v[i];
//          int j= i-1;

//          while (j >= 0 && v[j]> temp)
//          {
//            v[j+1] = v[j];
//            j--;
//          }

//          v[j+1] = temp;
//     }
// }

// int main () {
//       // O (n sqaure ) time comp 
//     int n;
//     cin >> n;
//     vector<int> v(n);

//     for (int i=0; i<v.size(); i++) {
//         cin >> v[i];
//     }

//     insertionsort(v);

//     for (int i=0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }cout << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {9, 5, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
