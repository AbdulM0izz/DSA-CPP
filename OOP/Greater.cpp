#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreaterElements(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1); // Default -1
    stack<int> st; // stack me index store karenge

    for (int i = 0; i < n; i++) {
        // Jab tak current element stack ke top se bada hai
        while (!st.empty() && arr[i] > arr[st.top()]) {
            result[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    return result;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> ans = nextGreaterElements(arr);

    cout << "Next Greater Elements: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
