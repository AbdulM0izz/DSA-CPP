#include <iostream>
using namespace std;
void process(int *arr,int n){
    //now the parameter *arr have the address of first index of arr of main
    for(int i=0; i<n; i++){
        cout << *(arr + i) << " " << endl;
    }

}
int main(){

    int arr[5] = {1,2,3,4,5};
    process(arr,5);

    return 0;
}