#include <iostream>
using namespace std;
int f(int arr[],int idx , int size){
    //base case
    if (idx == size-1){
        return arr[idx];
    }
    return arr[idx] + f(arr,idx+1,size);

}
int main(){
    //Find the sum of the value of the array

    int arr[]={1,2,3,4,5};
    int idx = 0;
    int size = 5;
    
    int sum = f(arr,idx,size);

    cout << sum ;


    return 0;
}