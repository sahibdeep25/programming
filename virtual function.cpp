
#include <iostream>
using namespace std;

class Student {
public:
    virtual void showFee() {
        cout << "General student fee: Rs. 40000" << endl;
    }
};

class Hosteller : public Student {
public:
    void showFee() override {
        cout << "Hosteller fee: Rs. 60000" << endl;
    }
};

class DayScholar : public Student {
public:
    void showFee() override {
        cout << "Day scholar fee: Rs. 40000" << endl;
    }
}; 

int main() {
    Hosteller h;
    DayScholar d;
    Student *ptr;

    ptr = &h;
    ptr->showFee();

    ptr = &d;
    ptr->showFee();

    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
