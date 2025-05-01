#include <iostream>
using namespace std;
int linearsearch (int arr[], int target, int size) {
    for (int i=0; i<size; i++) {
        if (arr [i] == target) {
            cout << "Present at index " << i << endl;
            return i;
         }
    }
    cout << "not found";
    return -1;

    
}
int main () {
    int target;
    cin >> target;

    int arr[5]= {3,4,5,6,9};
    linearsearch(arr,target,5);
   

    return 0;
}

// this is inear search cux size of arr decrease by one if target not present 
