#include <iostream>
using namespace std;
int main (){
    int array [] = {10,20,5,3,9};

    int key = 9;
    int ans = -1 ;

    for (int i = 0; i < 5; i++){
        if (array[i] == key){
            ans = i ;
            break;
        }
    }
     cout << "Index Of "<< key << " = " << ans;
    




    return 0 ;
}