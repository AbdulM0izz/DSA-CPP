#include <iostream>
using namespace std;
int main(){
    int matrix1[2][2] = {{1,2},{3,4}};
    int matrix2[2][2] = {{1,2},{3,4}};

    bool istrue = true;
    for (int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(matrix1[i][j] != matrix2[i][j]){
                istrue = false;
                break;
            }
        }
    }
    if (istrue){
        cout <<"Both Matrix are equal."<<endl;
    }else{
        cout <<"Both Matrix are not equal."<<endl;
    }
    return 0;
}