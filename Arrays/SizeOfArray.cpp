#include <iostream>
using namespace std;
int main(){
    int array [5] = {1,2,3,4,5};
    
    cout << "Size of array = " << sizeof (array) <<endl;
     cout << "Length Of array = " << sizeof (array) / sizeof (array [0]) ;


    return 0;
}
