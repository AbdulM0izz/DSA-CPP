#include <iostream>
#include <vector>
using namespace std;
bool twodimsearch (vector<vector<int>> &input, int target) {
   int n = input.size();// rows
   int m = input[0].size(); // columns

   int lo = 0, hi = n*m -1;

   while (lo <= hi)
   {
     int mid = lo + (hi - lo) / 2;
     int x = mid/m;
     int y = mid%m;

     if (input[x][y] == target) {
        return true;
     } else if (input[x][y] < target) {
        lo = mid + 1;
     } else {
        hi = mid -1;
     }
   }
   return 0;
}
int main () {
   vector<vector<int>> input {{2,4,2,2},{2,3,4,4},{0,4,1,10}};
   int target = 15;
   cout << twodimsearch (input, target);
    return 0;
}