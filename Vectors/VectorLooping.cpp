#include <iostream>
#include <vector>
using namespace std;
int main(){
    // Take input in vector with for loop
    vector<int> v;
     for (int i = 0; i < 3; i++) {  // We will take 5 inputs
        int element;
        cin >> element;
        v.push_back(element);
    }
   // Print the input value

   for (int i=0; i<v.size(); i++){
    cout << v[i] << " " << endl;
   }
   cout << endl;

   // for each loop to print 
   for (int ele: v){
    cout << ele << " ";
   }
   cout << endl;

   //while loop to print 

   int idx = 0;
   while(idx < v.size()){
    cout << v[idx] <<" ";
    idx++;
   }
   cout << endl;
   





    return 0;
}