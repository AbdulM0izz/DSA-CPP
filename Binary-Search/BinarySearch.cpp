#include <iostream>
#include <vector>
using namespace std;

int binarysearch (vector<int> &input, int target) {
    //define search space 
    int st = 0; //start of array
    int en = input.size() -1; //end of the array

    while (st <= en)
    {
        //calculate mid point for search space 
        int mid = (st + en )/ 2;

        if (input[mid] == target) return mid;
        else if (input[mid] < target ) {
            // discard the left of mid 
            st = mid + 1;
        }else {
            en = mid -1;
        }

    }
    return -1;
    

}
int main () {
    vector<int> input {2,4,5,7,15,24,45,50};
    int target = 15;
    
   cout <<  binarysearch (input , target);
   
    
    return 0;
}
// Binary search is asending sorting array

// Bs says divide array in two equal parts 

// then check mid ele with target

// if mid ele is less then target so it means starting ele till mid are also less then mid and also we can says target will not be present in this region

// search space will be next part of the array and starting index will ad mid + 1

//Again take mid of this part like starting index + ending index / 2

//Time complexicity     O(log n)
