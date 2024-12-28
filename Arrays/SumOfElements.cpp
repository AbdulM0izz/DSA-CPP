#include <iostream>
using namespace std;
int main (){
    // Loop for taking input in array
    int array[4];
    for (int i=0; i<4; i++){
        cin >> array[i];
    }

// calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    int sum = 0;
// loop to print the elements of the array
    for ( int i=0; i<size; i++ ){
        sum += array[i];
    }
    cout << sum << endl ;



    return 0;
}