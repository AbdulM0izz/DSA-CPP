#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    //Im this code unique element in array will be printed;
    int arr[]={3,4,3,4,5,6,6,1,1};
    int size = 9;


    //loop to replace the values of pairs by -1
    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if (arr[i]==arr[j]){
                arr[i]=arr[j]=-1;
            }

        }
    }


    for (int i=0; i<size; i++){
        if (arr[i]>0){
            cout <<arr[i]<< endl;
        }
    }


    






    return 0;
}