#include <iostream>
#include <vector>
using namespace std;
void f (int arr[], int length, int i,int sum, vector<int> &result) {

    //base case
    if (i == length) {
        result.push_back(sum);
        return;
    }

    f (arr ,length , i+1 , sum + arr[i] ,result);
    f (arr, length, i+1 , sum, result);
}

int main () {
    //Print all sum of all the subset of the given array
    int arr [] = {2,4,5};
    int length = 3;    
    vector<int> result;

    f (arr, length, 0, 0 , result);

    for (int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}