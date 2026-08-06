#include<iostream>
using namespace std;
class Student{
   public:
   int urn,crn;
   string name;
   void display(int n){
        for (int i=1;i<=n;i++){
        cout<<"Name: "<<name<<endl<<"URN: "<<urn<<endl<<"CRN: "<<crn<<endl;
    }
  }
};
int main(){
    Student s;
    s.name="Sahibdeep Kaur";
    s.urn=2514174;
    s.crn=2515249;
    s.display(2);
    return 0;
}