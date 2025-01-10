
#include <iostream>
using namespace std;
int main()
{
    int array[] = {1,2,3,4,5};
    int n = 5 ;
    int k ;
    cout << "Enter Value of k to rotate array K should Not >5 " << endl;
    cin >> k; 

    //storing last elements of the array in ansarray
    int ansarray[5];
    int j=0;
    for (int i=n-k; i<n; i++){
        ansarray[j++] = array[i];
    }

    //storing first elememts of the array
    for (int i=0; i<=k; i++){
        ansarray[j++] = array[i];
    }

    //printing the array
    for (int i=0; i<n; i++){
        cout <<ansarray[i] << " ";
    }
    cout << endl;
    
	
	
	return 0;
}
