
#include <iostream>
using namespace std;
int main(){
    int array [4] = {1,2,3,4};

    for (int i=0; i<=4; i++){
        cout << array [i]<<endl;
    }


// use of For each loop It wil Print all the elements of the array
for (int i: array){
    cout << i << endl;
}



    return 0;
}
