#include <iostream>
#include <vector>
using namespace std;

//fun retun type
vector<vector<int> > createSpiralMatrix(int n) {
    vector<vector<int> > matrix(n, vector<int>(n));  // Removed extra {
    
    int left = 0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;
    
    int direction = 0;
    int value = 1;
    
    while(left <= right && top <= bottom) {
        //top left to right
        if(direction == 0) {
            for(int i=left; i<=right; i++) {
                matrix[top][i] = value++;
            }
            top++;
        }
        //top right to bottom
        else if(direction == 1) {
            for(int j=top; j<=bottom; j++) {  // Changed i to j
                matrix[j][right] = value++;
            }
            right--;
        }
        //bottom right to left
        else if(direction == 2) {
            for(int k=right; k>=left; k--) {
                matrix[bottom][k] = value++;
            }
            bottom--;
        }
        //bottom left to top
        else {
            for(int l=bottom; l>=top; l--) {  // Changed increment to decrement
                matrix[l][left] = value++;
            }
            left++;  // Changed bottom-- to left++
        }
        direction = (direction + 1) % 4;
    }
    return matrix;
}

int main() {
    // matirx of n*n size print matrix 1 to n2 spiral way
    int n;
    cin >> n;
    
    vector<vector<int> > matrix(n, vector<int>(n));
    
    matrix = createSpiralMatrix(n);
    //printing spiral matrix
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}