#include <iostream>
#include <vector>
using namespace std;

  void reverseString(vector<char>& s) {
        int st = 0;
        int en = s.size() - 1;
        while (st < en) {
            swap(s[st ++] , s[en --]);
        }
    }
int main () {
    return 0;
}