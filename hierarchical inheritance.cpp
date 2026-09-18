#include<iostream>
using namespace std;
class Patient
{
protected:
    string name;
    int age;
public:
    void getPatient()
    {
        cout<<"Enter Patient Name: ";
        getline(cin>>ws,name);
        cout<<"Enter Age: ";
        cin>>age;
    }
};
class OPD:public Patient
{
    string doctor;
public:
    void getDoctor()
    {
        cout<<"Enter OPD Doctor Name: ";
        getline(cin>>ws,doctor);
    }
    void display()
    {
        cout<<"\n--- OPD Details ---"<<endl;
        cout<<"Patient Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"OPD Doctor: "<<doctor<<endl;
    }
};
class Pharmacy:public Patient
{
    string medicine;
public:
    void getMedicine()
    {
        cout<<"Enter Medicine Name: ";
        getline(cin>>ws,medicine);
    }
    void display()
    {
        cout<<"\n--- Pharmacy Details ---"<<endl;
        cout<<"Patient Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Medicine: "<<medicine<<endl;
    }
};
int main()
{
    OPD o;
    Pharmacy p;
    cout<<"Enter OPD Patient Details\n";
    o.getPatient();
    o.getDoctor();
    o.display();
    cout<<"\nEnter Pharmacy Details\n";
    p.getPatient();
    p.getMedicine();
    p.display();
    cout<<"\nName : Sahibdeep Kaur";
    cout<<"\nUrn : 2514174";
    return 0;
}