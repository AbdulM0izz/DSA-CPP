#include <iostream>
using namespace std;

int f (int p , int q){
    int result = 1;
    //base case
    if (q==0) return 1;
    else{
        result = p*f(p,q-1);
    }
    return result;

}
int main(){

    //Given two numbers p and q find the value of p^q using recursion

    int result = f(2,3);
    cout << result << endl;

    
  




    return 0;
}