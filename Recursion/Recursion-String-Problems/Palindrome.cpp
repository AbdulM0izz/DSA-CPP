#include <iostream>
#include <string>
using namespace std;

bool palindrome(string num) {
    int left = 0;
    int right = num.length() - 1;
    
    // Compare characters from both ends moving towards the center
    while (left < right) {
        if (num[left] != num[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string num = "1261";

    if (palindrome(num)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}