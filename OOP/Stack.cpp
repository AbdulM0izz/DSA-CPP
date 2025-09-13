#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string s) {
    stack<char> st;
    for (char c : s) {
        // Agar opening bracket mila to push kar do
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        // Agar closing bracket mila
        else {
            if (st.empty()) return false; // Khaali stack ka matlab extra closing
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty(); // Agar stack empty hai to balanced hai
}

int main() {
    string s;
    cout << "Enter brackets string: ";
    cin >> s;

    if (isBalanced(s))
        cout << "Valid" << endl;
    else
        cout << "Invalid" << endl;

    return 0;
}
