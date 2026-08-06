#include <iostream>
using namespace std;
class Student
{
public:
    int marks;
    void result(int marks){
    if (marks>=90){
        cout<<"Grade A"<<endl;
    }
    else if (marks>=80){
        cout<<"Grade B"<<endl;
    }
    else if (marks>=70){
        cout<<"Grade C"<<endl;
    }
    else if (marks>=60){
        cout<<"Grade D"<<endl;
    }
    else{
        cout<<"Grade F"<<endl;
    }
}
};
    int main(){
        Student s1;
        cout<<"Enter marks: ";
        cin>>s1.marks;
        s1.result(s1.marks);
        return 0;
    }