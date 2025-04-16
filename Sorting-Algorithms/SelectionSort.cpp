    #include <iostream>
    #include <vector>
    using namespace std;

    void  selectinsort (vector <int> &v) {
        int n = v.size();

        //finding minimum in unsorted array
        for (int i=0; i<n-1; i++) {
            int minindex = i;
            for (int j=i+1; j<n; j++) {
                if (v[j] < v[minindex]) {
                    minindex = j;
                }
            }
         //placing minimum at begin of the array
         if (i != minindex) {
            swap(v[i], v[minindex]);
         }
         
        }
        return ;

    }

    int main()
    {
        int n;
        cin >> n;

        vector <int> v ( n );

        for ( int i=0; i < v.size(); i++ ) {
            cin >> v [i];
        }
        
        selectinsort (v);

        for ( int i=0; i<v.size(); i++) {
            cout << v[i] << " ";
        }cout << endl;

        return 0;
    }