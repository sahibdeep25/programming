#include <iostream>
using namespace std;
class Student
{
public:
    string name,Class;
    int urn,crn;
    void display()
    {
        cout << "Name: " << name << endl;
        cout<<"Class: "<<Class<<endl;
        cout << "URN: " << urn << endl;
        cout<<"CRN: "<<crn<<endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Sahibdeep Kaur";
    s1.Class="CSE-1";
    s1.urn = 2514174;
    s1.crn=2515249;
    s1.display();
    return 0;
}