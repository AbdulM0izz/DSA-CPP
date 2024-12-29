#include <iostream>
using namespace std;
int main(){
    int array [] = {5,6,30,5,6};

    int max = array [0];

    for (int i=1; i<5; i++){

        if(array[i] > max){
            max = array[i];
        }

    }
    cout << "Maximum = " <<  max ;
    


    return 0;
}