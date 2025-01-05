#include <iostream>
#include <vector>
using namespace std;
int main (){
    int arr[]= {3,4,6,7,1};
    
    cout << "Enter Target Sum ";
    int targetSum ;
    cin >> targetSum;

    int lsize = 5;
    int pairs = 0;

    for (int i=0; i<lsize; i++){
        for (int j=i+1; j<lsize; j++){
            if(arr[i] + arr[j] == targetSum){
                pairs++;
            }
        } 
    }
    cout << "Pairs: "<< pairs << " ";
     






    return 0;
}