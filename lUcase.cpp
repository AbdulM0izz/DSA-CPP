#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter char "<<endl;
    cin>>ch;

    if(ch >= 'a' && ch <='z'){
        cout<<"Lower Case: "<<endl;
    }else if( ch >= 'A' && ch <= 'Z'){
        cout<<"upper case: "<<endl;
    }
    return 0;
}