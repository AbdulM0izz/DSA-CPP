    #include <iostream>
    #include <vector>
    using namespace std;
    int bubblesort (vector<int> &v) {
        for (int i=0; i<v.size(); i++) {
            for (int j=i+1; j<v.size(); j++) {
                if (v[i] > v[j]){
                    swap(v[i],v[j]);
                }
            }
        }
            return 0;
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