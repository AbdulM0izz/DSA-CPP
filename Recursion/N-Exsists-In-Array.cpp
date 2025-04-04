#include <iostream>
using namespace std;

bool f (int arr[], int n , int i, int x ) {
    if (i == n) {
        return false;
        //base case mens not present in array
    }
    return (arr[i] == x) || f(arr, n, i+1 , x);
}

int main () {
    int arr[] = {1,2,3,4};

    bool ans = f (arr, 4 , 0 , 4);
    if (ans) cout << "Yes " << endl;
    else cout << "No " << endl;
        
    



    return 0;
}
