#include <iostream>
using namespace std;
int main()
{
	int n; int max;
	cout << "Enter Size Of the Array: ";
	cin >> n;
	int array[n];
	
	for (int i=0; i<n; i++){
		cin >>array[i];
	}
       max = array[0];
	
	for (int i=0; i<n; i++){
		if (max < array[i]){
			max = array[i];
		}
	}
	cout << "Maximum: "<<max<< endl;
	
	
    


    return 0;
}
