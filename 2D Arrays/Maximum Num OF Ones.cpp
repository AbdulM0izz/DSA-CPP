#include <iostream>
#include <vector>
using namespace std;
int maxonesrow(vector<vector<int>> &V){
    int maxones = INT16_MIN;
    int maxonerow = -1;
    int columns = V[0].size();
    for (int i=0; i<V.size(); i++ ){
        for(int j=0; j<V[i].size(); j++){
            if(V[i][j] == 1){
                int numofones = columns - j;
                if(numofones > maxones){
                    maxones = numofones;
                    maxonerow = i;
                }
            }

        }
    }
    return maxonerow;

}
int main()
{
    int n,m;
    cout <<"Ennter Rows And Columns: "<<endl;
    cin >> n >> m;

     vector<vector <int>> vec (n, vector<int> (m));    
     for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>vec[i][j];
        }
     }

     //function for maximum number ones in rows
     int res = maxonesrow(vec);
     cout << res << endl;


    return 0;
}