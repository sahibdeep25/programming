#include <iostream>
using namespace std;
class Vehicle{
protected:
    string brand;
public:
    void getBrand(){
        cout << "Enter vehicle brand: ";
        cin >> brand;
    }
};
class Car : public Vehicle{
protected:
    string model;
public:
    void getModel(){
        cout << "Enter car model: ";
        cin >> model;
    }
};
class SportsCar : public Car{
private:
    int speed;
public:
    void getSpeed(){
        cout << "Enter top speed: ";
        cin >> speed;
    }
    void display(){
        cout << "---- Sports Car Details ----\n";
        cout << "Brand     : " << brand;
        cout << "\nModel     : " << model;
        cout << "\nTop Speed : " << speed << " km/h";
    }
};
int main(){
    SportsCar s;
    cout<<"MULTILEVEL INHERITANCE\n";
    s.getBrand();
    s.getModel();
    s.getSpeed();
    s.display();
    cout << "\nSahibdeep Kaur (2514174)";
    return 0;
}