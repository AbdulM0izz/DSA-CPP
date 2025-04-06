#include <iostream>
using namespace std;

bool f (int arr[], int size , int i, int target ) {
    if (i == size) {
        return false;
        //base case mens not present in array
    }
    return (arr[i] == target) || f(arr, size, i+1 , target);
}

int main () {
    int arr[] = {1,2,3,4};

    bool ans = f (arr, 4 , 0 , 5);
    if (ans) cout << "Yes " << endl;
    else cout << "No " << endl;
        
    



    return 0;
}
