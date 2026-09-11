#include<iostream>
using namespace std;
class Vehicle{
    protected:
    string brand;
    public:
    void getVehicle(){
        cout<<"Enter Brand: ";
        cin>>brand;
    }
};
class Car:public Vehicle{
private:
    string model;
    public:
    void getDetails(){
        cout<<"Enter model: ";
        cin>>model;
    }
    void display(){
        cout<<"---Car details---";
        cout<<"\nCar brand: "<<brand;
        cout<<"\nModel: "<<model<<endl;
    }
};
int main(){
    Car c;
    cout<<"SINGLE INHERITANCE\n";
    c.getVehicle();
    c.getDetails();
    c.display();
    cout<<"Sahibdeep Kaur(2514174)";
    return 0;
}