#include<iostream>
using namespace std;
class LaptopInfo{
    protected:
    string brand,model;
    public:
    void getLaptopInfo(){
        cout<<"Enter Brand: ";
        cin>>brand;
        cout<<"Enter model name: ";
        cin>>model;
    }
};
class Memory{
    protected:
    int ram,storage;
    public:
    void getMemory(){
        cout<<"Enter RAM: ";
        cin>>ram;
        cout<<"Enter Laptop Storage: ";
        cin>>storage;
    }
};
class Laptop:public LaptopInfo,public Memory{
    public:
    void getDetails(){
        cout<<"----Laptop Details----\n";
        cout<<"Brand name: "<<brand;
        cout<<"\nModel name: "<<model;
        cout<<"\nRAM:"<<ram<<"GB";
        cout<<"\nStorage: "<<storage<<"GB";
    }
};
int main(){
    Laptop l;
    l.getLaptopInfo();
    l.getMemory();
    l.getDetails();
    cout<<"\nSahibdeep Kaur(2514174)";
    return 0;
}