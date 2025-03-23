#include <iostream>
using namespace std;

int f(int arr[],int idx,int n){
    //base case
    if (idx == n-1){
        return arr[idx];
    }
    
    return max(arr[idx], f(arr, idx+1,n));
}
int main(){

    int arr[]= {2,3,4,5,7};
    int n=5;

   int maximum = f(arr,0,n);
   
   cout << maximum;




    return 0;
}
