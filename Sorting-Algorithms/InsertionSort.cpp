#include <iostream>
#include <vector>
using namespace std;

void insertionsort (vector<int> &v) {
    int n = v.size();
    for (int i=1; i<n; i++) {
         int temp = v[i];
         int j= i-1;

         while (j >= 0 && v[j]> temp)
         {
           v[j+1] = v[j];
           j--;
         }

         v[j+1] = temp;
    }
}

int main () {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i=0; i<v.size(); i++) {
        cin >> v[i];
    }

    insertionsort(v);

    for (int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }cout << endl;

    return 0;
}