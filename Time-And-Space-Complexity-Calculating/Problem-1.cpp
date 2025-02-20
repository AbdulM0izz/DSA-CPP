#include <iostream>
using namespace std;
int main()
{
    // Calculating time complexicity for this piece of code Big O Notation;

    int n=5;
    int value =0;
    for(int i=0; i<n; i*=2){
        value++;
    }
   // O(logn) time complexicity



    return 0;
}
