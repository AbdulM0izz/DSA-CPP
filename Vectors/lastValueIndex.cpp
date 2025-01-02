#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    vector<int> v(6);
    for (int i=0; i<6; i++){
        cin >> v[i];
    }

    int x;
    cout << "Enter X";
    cin >> x;

    int last =-1;
    for (int i=0; i < v.size(); i++){
        if (v[i]== x){
            last=i;
        }
    }
    cout << last << " ";







    return 0;
}