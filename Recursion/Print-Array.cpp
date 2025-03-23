#include <iostream>
using namespace std;
void f(int arr[],int idx , int n){

    //base case
    if (idx == n) return;
    
    //self work
    cout << arr[idx] << "\n";

    //assumption
    f(arr,idx+1,n);
}
int main(){

    //Print the array recursively

    int arr[]={1,2,3,4,5};
    int n=5;

    f(arr,0,n);
}