#include<iostream>
using namespace std;
class Student{
    int marks1,marks2,marks3,total;
    float percentage;
    void Total(){
    total=marks1+marks2+marks3;
}
void Percentage(){
percentage=total/3.0;
}
public:
void getData(){
    cout<<"Enter marks in subject 1: ";
    cin>>marks1;
    cout<<"Enter marks in subject 2: ";
    cin>>marks2;
    cout<<"Enter marks in subject 3: ";
    cin>>marks3;
}
void result(){
    getData();
    Total();
    Percentage();
    cout<<"\nTotal Marks = "<<total;
    cout<<"\nPercentage= "<<percentage<<"%";
}
};
int main(){
    Student s;
    cout<<"Name: Sahibdeep Kaur\n";
    cout<<"URN: 2514174\n";
    s.result();
    return 0;
}