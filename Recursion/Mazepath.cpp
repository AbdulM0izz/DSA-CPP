#include <iostream>
using namespace std;

int f (int i , int j , int m , int n ) {
    //base case 
    if (i == m-1 && j == n-1 ) return 1;
    if (i >= m || j >= n) return 0;

    return  f (i, j+1 ,m , n) + f (i+1 , j , m ,n);
}

int main () {
    //given grid n*m size give the all possible paths to reach n-1 , m-1

   cout <<  f (0 , 0, 2,3);





    return 0;
}