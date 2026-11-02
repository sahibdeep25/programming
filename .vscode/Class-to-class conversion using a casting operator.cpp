
#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius {
    float temp;

public:
    Celsius(float t) {
        temp = t;
    }

    operator Fahrenheit();
};

class Fahrenheit {
    float temp;

public:
    Fahrenheit(float t) {
        temp = t;
    }

    void display() {
        cout << "Temperature in Fahrenheit: "
             << temp << endl;
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit(temp * 9.0 / 5.0 + 32);
}

int main() {
    Celsius c(25);
    Fahrenheit f = c;

    f.display();

    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
