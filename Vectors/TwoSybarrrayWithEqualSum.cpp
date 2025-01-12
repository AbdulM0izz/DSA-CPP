#include <iostream>
#include <vector>
using namespace std;
bool checkPrefixSuffixSum(vector<int> &v){
    //To calculate the total sum
    int totalSum = 0;
    for (int i=0; i<v.size(); i++){
        totalSum += v[i];
    }

    int Prefixsum = 0;
    for (int i=0; i<v.size(); i++){
        Prefixsum += v[i];
         int SuffixSum = totalSum - Prefixsum;
         if (SuffixSum == Prefixsum){
            return true;
         }
    }
    return false;

}
int main()
{
    //In this to check prefix sum and the suffix sum is equal or not
    int n;
    cin >>n;

    vector <int> v;
    for (int i=0; i<n; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    cout << checkPrefixSuffixSum(v)<<endl;
    









    return 0;
}