#include <iostream>
using namespace std;
int main(){
	int arr[2] = {1,2};
    int *ptr = &arr[0];

    cout << ptr << " " << *ptr << endl;
    cout << (ptr + 1) << " " << (*ptr + 1) << endl; // this will access the index of arr 1;
    cout << *ptr++; // now pointer is on index 1 ;
    
    
   



	return 0;
}
