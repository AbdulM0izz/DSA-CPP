#include <iostream>
using namespace std;
void funtocal(string str,char ch,int *ptrfirst,int *ptrlast){
    for(int i=0; i < str.length(); i++){
        if(str[i]==ch){
            *ptrfirst = i;
            break;
        }
    }
    for (int j=str.length(); j>0; j--){
        if (str[j]==ch){
            *ptrlast = j;
            break;
        }
    }
}
int main(){
    string str = "aaabac";
    char ch = 'a';

    int first = -1;
    int last = -1;

    int *ptrf = &first;
    int *ptrl = &last;

    funtocal(str,ch ,ptrf, ptrl);
    cout << *ptrf << endl;
   
    


    
    return 0;
}