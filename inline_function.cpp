#include <iostream>
using namespace std;
class Student{
    public:
    inline int total_Marks(int m1,int m2,int m3){
        return m1+m2+m3;
    }
};
int main(){
    Student s;
    int m1,m2,m3,total;
    cout<<"Enter marks of subject 1: ";
    cin>>m1;
    cout<<"Enter marks of subject 2: ";
    cin>>m2;
    cout<<"Enter marks of subject 3: ";
    cin>>m3;
    total=s.total_Marks(m1,m2,m3);
    cout<<"Total marks: "<<total<<endl;
    cout<<"Average marks: "<<total/3.0<<endl;
    cout<<"Name: Sahibdeep Kaur\nURN:2514174";
    return 0;
}