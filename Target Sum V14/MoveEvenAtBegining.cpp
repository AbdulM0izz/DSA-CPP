#include <iostream>
#include <vector>
using namespace std;
void sortbyparity(vector<int> &v){
    int leftpointer = 0;
    int rightpointer = v.size()-1;
    while (leftpointer < rightpointer){
        if (v[leftpointer] % 2==1 && v[rightpointer] % 2==0 ){
            swap(v[leftpointer],v[rightpointer]);
            leftpointer++;
            rightpointer--;
        }
        if(v[leftpointer]% 2== 0){
            leftpointer++;
        }
        if(v[rightpointer]% 2== 1){
            rightpointer --;
        }
    }
    return;

}
int main ()
{
    cout << "Size of the v: "<<endl;
    int n;
    cin >>n;

    vector<int> v;
    for (int i=0; i<n; i++){
        int ele;
        cin >>ele;
        v.push_back(ele);

    }
    sortbyparity(v);

    for (int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;









    return 0;
}