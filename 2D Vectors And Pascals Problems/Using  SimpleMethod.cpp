#include <iostream>
using namespace std;
int main()
{
    int row;
    cout <<"Enter Rows:"<<endl;
    cin>>row;

    int column;
    cout << "Enter Column" <<endl;
    cin>>column;

    for(int i=1; i<=row; i++){
        int k=1;
        for(int j=1; j<=column; j++){
            if(j <= i){
                cout << k << " ";
                k=k*(i-j)/j;
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}