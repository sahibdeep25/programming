
#include <iostream>
using namespace std;

class Kilometer {    
public:
    int km;

    Kilometer(int k) {
        km = k;
    }
};

class Meter {
    int m;

public:
    Meter(Kilometer k) {
        m = k.km * 1000;
    }

    void display() {
        cout << "Distance in metres: " << m << endl;
    }
};

int main() {
    Kilometer k(5);
    Meter m = k;

    m.display();

    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
