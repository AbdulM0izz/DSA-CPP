#include <iostream>
using namespace std;
struct student{
    int student_id;
    string name;
    float gpa;
    int marks[7];
};
student globalstudent ={10,"Moiz",3.5,5,5,5,5,5,5,5};

void print(student &globalstudent , student &localstudent){
    cout <<"Global Student:"<<endl;
    cout <<"Student ID: "<<globalstudent.student_id<<endl;
    cout<<"Student Name: "<<globalstudent.name<<endl;
    cout<<"Gpa: "<<globalstudent.gpa<<endl;
    cout<<"Marks:  ";
    for(int i=0; i<7; i++){
        cout <<globalstudent.marks[i] << " ";
    }
    
    cout<<"\n";
    cout<<"Local Student: "<<endl;
    cout<<"Student ID: "<<localstudent.student_id<<endl;
    cout<<"Name: "<<localstudent.name<<endl;
    cout<<"Gpa: "<<localstudent.gpa<<endl;
    cout<<"Marks: ";
    for(int i=0; i<7; i++){
        cout<< localstudent.marks[i]<<" ";
    }

}

int main()
{
    student localstudent = {20,"Ali",4,5,5,5,5,5,5,5};

    print(globalstudent,localstudent);


    return 0;
}