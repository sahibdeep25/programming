
#include <iostream>
using namespace std;
class Marks {
    int value;
public:
    Marks(int v) {
        value = v;
    }
    void operator-() {
        value = -value;
    }
    void display() {
        cout << "Marks adjustment: " << value << endl;
    }
};
int main() {
    Marks m(15);
    cout << "Before unary minus:" << endl;
    m.display();
    -m;
    cout << "After unary minus:" << endl;
    m.display();
    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";
    return 0;
}
