#include <iostream>
using namespace std;
class P ]\arkingSlot{
    int slotNumber;
    string vehicleName;
public:
    void setDetails(int slotNumber, string vehicleName){
        this->slotNumber = slotNumber;
        this->vehicleName = vehicleName;
    }
    void display(){
        cout << "Parking Slot: " << this->slotNumber << endl;
        cout << "Vehicle Name: " << this->vehicleName << endl;
    }
};
int main(){
    ParkingSlot p1;
    p1.setDetails(12, "Hyundai i20");
    p1.display();
    return 0;
}