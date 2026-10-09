#include <iostream>
using namespace std;
class Employee{
public:
    void display(){
        cout<<"Employee ID: 101"<<endl;
        cout<<"Employee Name: Sahibdeep"<<endl;
    }
};
class Manager{
public:
    void display(){
        cout<<"Manager ID: 102"<<endl;
        cout<<"Manager Name: Ravneet"<<endl;
    }
};
class TeamLeader: public Employee, public Manager{
public:
    void show(){
        cout<<"Team Leader Details"<<endl;
    }
};
int main(){
    TeamLeader obj;
    obj.show();
    cout<<"\nEmployee Details:"<<endl;
    obj.Employee::display();
    cout<<"\nManager Details:"<<endl;
    obj.Manager::display();    
    return 0;
}