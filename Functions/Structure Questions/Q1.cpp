#include <iostream>
#include <string>
using namespace std;
struct student{
    int id;
    string name;
    float gpa;
    int marks[5];
};

void takeinput (student students[], int n){
    for (int i=0; i<n; i++){
        cout <<"Id: "<<endl;
        cin >>students[i].id;
        cout <<"Name: "<<endl;
        getline(cin,students[i].name);
        cout <<"Gpa: "<<endl;
        cin >>students[i].gpa;
        cout <<"Marks:"<<endl;
        for(int j=0; j<5; j++){
            cin >>students[i].marks[j];
        }
    }
}
void calculate(student students[],int n){
    int highestindex =0;
    int highestaverage =0;
    for(int i=0; i<n; i++){
        int sum =0;
        for(int j=0; j<5; j++){
            sum +=students[i].marks[j];
        }
        float average = sum/5;
        if (average > highestaverage){
            highestaverage=average;
            highestindex =i;
        }
    }
    cout <<"ID: "<<students[highestindex].id <<endl;
    cout <<"Name: "<<students[highestindex].name <<endl;
    cout <<"Gpa: "<<students[highestindex].gpa <<endl;
    cout <<"Average Marks: "<<highestaverage <<endl;
    }

int main(){
    int n = 2;
    student students[n];
    takeinput(students,n);
    calculate(students,n);




    return 0;
}
