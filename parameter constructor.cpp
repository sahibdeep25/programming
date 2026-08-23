#include<iostream>
using namespace std;
class Student{
    public:
    int roll_no;
    string Class_name;
    string name;
    Student(string n,string c,int r){
        roll_no=r;
        name=n;
        Class_name=c;
    }
    void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Class: "<<Class_name<<endl;
    cout<<"URN: "<<roll_no<<endl;
    }
};
int main(){
    Student s1("Sahibdeep Kaur","CSE",2514174);   
    Student s2("Ravneet Kaur","CSE",2514168);
    Student s3("Sachkirat Kaur","CSE",2514171);
    s1.display();
    s2.display();
    s3.display();
    return 0;
}