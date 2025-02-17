#include <iostream>
#include <vector>
using namespace std;
//logic
   int rectangleSum(vector<vector<int> > &matrix, int l1,int l2,int r1, int r2){
   	         int sum=0;
   	    for(int i=l1; i<=l2; i++){
   	    	for(int j=r1; j<=r2; j++){
   	    	    sum+=matrix[i][j];
			   }
		   }
	   return sum;
   }
int main()
{
    // Give a matrix 'a' of dimension n*m and 2 cordinates l1,r1 and l2,r2. Return the sum of the rectangle from l1,r1 to l2,r2;
     int n,m;
     cin>>n>>m;

	 vector<vector<int> > matrix(n,vector<int> (m));
	 for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>matrix[i][j];
		}
	 }
	 int l1,r1,l2,r2;
	 cin>>l1>>r1>>l2>>r2;

	 for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<matrix[i][j]<<" ";
		}cout<<endl;
	 }

	 int sum = rectangleSum(matrix,l1,l2,r1,r2);
	 cout<<sum<<endl;


       
	   
	  
    return 0;
}
