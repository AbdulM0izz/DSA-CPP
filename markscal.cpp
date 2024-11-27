#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your marks "<<endl;
	cin>>marks;

	if(marks>90){
		cout<<" A "<<endl;
	}else if(marks > 80 && marks <90){
		cout<<" B "<<endl;
	}else if(marks > 60 && marks < 80){
		cout<<" C "<<endl;
	}else{
		cout<<"Fail "<<endl;
	}
	 
	
	
	
	
	return 0;
	
}
