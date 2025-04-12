    #include <iostream>
    #include <vector>
    using namespace std;
    
    void bubblesort (vector<int> &v) {
        for (int i=0; i<v.size(); i++) {
            bool flag = false;
            for (int j=i+1; j<v.size(); j++) {
                if (v[i] > v[j]){
                    flag = true;
                    swap(v[i],v[j]);
                }
            }
            if (!flag) break;
        }
        return ;
    }
        int main () {
            int n;
            cin >> n;
            vector<int> v(n);

            for (int i=0; i<v.size(); i++) {
                cin >> v[i];
            }
            bubblesort(v);

            for (int i=0; i<v.size(); i++) {
                cout << v[i] << " ";
            }
                
            return 0;
        }