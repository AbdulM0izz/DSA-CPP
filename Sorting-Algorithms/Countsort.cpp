#include <iostream>
#include <limits>
#include <vector>
using namespace std;

void countsort (vector<int> &v) {
    int n = v.size();

    //find max element 
    int maxele = -50;
    for (int i=0; i<n; i++) {
        maxele = max(v[i],maxele);
    }

    //create freq array
    vector<int> freq(maxele + 1 , 0);
    for (int i=0; i<n; i++) {
        freq[v[i]];
    }

    //calculate cumulative freq
    for (int i=1; i<=maxele; i++) {
        freq[i] += freq[i-1];
    }

    //calulate the sorted array
    vector<int> ans(n);
    for (int i=n-1; i>=0; i--) {
        ans[--freq[v[i]]]= v[i];
    }

    //copying back ans in orignal array
    for (int i=0; i<n; i++) {
        v[i] = ans[i];
    }

}
int main () {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i] ;
    }
    
    countsort (a);
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}

//first store the frequency of every element means hows many elements are smaller then this element

//find max in orignal array 
//create new array of size max+1
// triverse orignal array if(arr[i]=3), so in count array[3] per incrementby 1
