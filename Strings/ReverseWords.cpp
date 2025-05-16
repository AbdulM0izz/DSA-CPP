#include <iostream>
#include <string>
using namespace std;
void reverse (string &str) {
    int left = 0;
    int right = str.size() -1 ;

    while (left < right)
    {
        if (str[left] == ' '){
            left++;
        } else if (str[right] == ' ') {
            right--;
        } else {
            swap (str[left], str[right]);
            left++;
            right--;
        }
    }
    
}
int main () {
    string str = "m o i z";
     reverse(str);
     cout << str << " ";
    return 0;
}