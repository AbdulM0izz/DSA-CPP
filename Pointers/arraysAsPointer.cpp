// cout << arr << endl; // name of the array act like pointer and if we print name of array it will print address of first index of array
// cout << ptr << endl
#include <iostream>
using namespace std;
int main(){

 int arr [5] = {1,2,3,4,5};
 int *ptr = &arr[0];

//   for (int i=0; i<5; i++){ // printing all the ele of arr using name of array
//     cout << *(arr + i) << endl;
//   }
 
//  for (int i=0; i<5; i++){
//     cout << *ptr++ << endl;
//  }
    return 0;
}