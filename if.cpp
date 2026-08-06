#include<iostream>
using namespace std;
class Student{
    public:
    int marks;
    void result(int marks){
        if (marks>=40){
            cout<<"Pass"<<endl;
        }
    }
};
int main(){
    Student s1;
    cout<<"Enter marks:";
    cin>>s1.marks;
    s1.result(s1.marks);
    return 0;
}