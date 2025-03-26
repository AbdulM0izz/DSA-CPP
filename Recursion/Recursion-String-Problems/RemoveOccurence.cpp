#include <iostream>
using namespace std;

string f(string &s , int idx , int n){

    //base case
    if(idx == n){
        return "";
    }
    string str = "";
    str += s[idx];
    return ( (s[idx]=='a') ? "" : str) + f(s,idx+1,n);
}

int main(){
    //Remove all the occurence of 'A' in the string Recursive 
     
   string s = "abcbf";
   int n = 5;
  cout <<  f(s,0,n);


    return 0;
}