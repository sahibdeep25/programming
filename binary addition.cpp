
#include <iostream>
using namespace std;

class Marks {
    int value;

public:
    Marks(int v) {
        value = v;
    }

    Marks operator+(Marks m) {
        return Marks(value + m.value);
    }

    void display() {
        cout << "Total marks: " << value << endl;
    }
};

int main() {
    Marks maths(85), programming(92);
    Marks total = maths + programming;

    total.display();

    cout << "Name: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
