#include <iostream>
#include <vector>
using namespace std;
void rotatearr(vector<vector<int>> &vec){
    //first transpose then reverse
    int n = vec.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(vec[i][j], vec[j][i]);
        }
    }

    //reverse
    for(int i=0; i<n; i++){
        reverse(vec[i].begin(), vec[i].end());
    }
    return;

}
int main()
{
    int n;
    cin >> n;
    vector <vector<int>> vec(n, vector<int> (n));
    //taking input
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> vec[i][j];
        }
    }

    //fun to rotate
    rotatearr(vec);
    
    //printinh the rotated array
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << vec[i][j];
        }cout <<endl << " ";
    }
     


     return 0;
}