#include<iostream>
using namespace std;
class Student{
    public:
    int marks;
    void display(int marks){
        switch (marks/10){
            case 10:
                cout<<"Grade O";
                break;
            case 9:
                cout<<"Grade A";
                break;
            case 8:
                cout<<"Grade B";
                break;
            case 7:
                cout<<"Grade C";
                break;
            case 6:
                cout<<"Grade D";
                break;
            case 5:
                cout<<"Grade E";
                break;
            default:
                 cout<<"Invalid";
                 break;
        }
    }
};
int main(){
    Student s1;
    cout<<"Enter marks: ";
    cin>>s1.marks;
    s1.display(s1.marks);
    cout<<endl;
    cout<<"Name: Sahibdeep Kaur"<<endl;
    cout<<"URN: 2514174"<<endl;
    return 0;
}