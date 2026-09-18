#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"This is base class.\n";
    }
};
class Derived: public Base{
    public:
    void show(){
        cout<<"This is the derived class.\n";
    }
};
int main(){
    Derived d;
    d.show();
    d.Base::show();
    cout<<"Name : Sahibdeep Kaur\n";
    cout<<"URN:2514174";
    return 0;
}