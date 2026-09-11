#include <iostream>
using namespace std;
class Electricity_Bill{
    public:
    static float calculateBill(int units){
        if (units<=100)
            return units*2.5;
        else if(units<=200)
            return 100*2.5+(units-100)*4;
        else
            return 100*2.5+units-100*4+(units-200)*5;
    }
};
int main(){
    int units;
    cout<<"Enter units consumed: ";
    cin>>units;
    cout<<"Electricity Bill= Rs "<<Electricity_Bill::calculateBill(units)<<endl;
    cout<<"Name: Sahibdeep Kaur\nURN: 2514174";
    return 0;
}