
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Rectangle : public Shape {
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Rectangle area: "
             << length * breadth << endl;
    }
};

class Circle : public Shape {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Circle area: "
             << 3.14 * radius * radius << endl;
    }
};

int main() {
    Rectangle r(8, 5);
    Circle c(3);

    r.area();
    c.area();

    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
