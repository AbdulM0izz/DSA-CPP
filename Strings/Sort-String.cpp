#include <iostream>
#include <string>
#include <vector>
using namespace std;
string coutsort (string str) {
    //first create frequency array
    vector<int> freq (26 , 0); //size 26 initialize 0

    //triverse string
    for (int i=0; i<str.size(); i++) {
         int index = str[i] - 'a';
         freq[index]++;  
    }
    // create sorted string
    int j=0;
    for (int i=0; i<26; i++) {
        while (freq[i]--)
        {
            str[j++] = i + 'a';
        }
    }
    return str;
}
int main () {
    string str;
    cin >> str;

    coutsort (str);

    return 0;
}
// given str sort the string 
// "coding"
// output: "cgdino"

/**
 * Count sort:
 * Create frequency array of max num
 *  
 */