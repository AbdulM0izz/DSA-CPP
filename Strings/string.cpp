#include <iostream>
#include <string>
using namespace std;
int main () {

    // string name; // input without space
    // cin >> name;
    
//     string fullname;
//     getline(cin, fullname);
//     cout << fullname << " ";

// check the asci value

// char ch = 'A';
// cout << int(ch) << " ";

// string str = "moiz";
// cout << str.substr(0 , 3) << " ";

//  string s1 = "abdul";
//  string s2 = "moiz"; 
//  cout << s1 + s2 << " ";

// string s1 = "moiz";
// char ch = 'p';
// s1.push_back(ch);
// cout << s1 << " ";

// string s = "moiz";
// cout << s.size() << " ";

int n = 200;
string str = to_string( n);
str += "2";
cout << str[1] << " ";
 
 
return 0;
}