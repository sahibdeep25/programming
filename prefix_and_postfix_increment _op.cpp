
#include <iostream>
using namespace std;

class Points {
    int score;

public:
    Points(int s) {
        score = s;
    }

    void operator++() {
        ++score;
    }

    void operator++(int) {
        score++;
    }

    void display() {
        cout << "Project points: " << score << endl;
    }
};

int main() {
    Points p(20);

    ++p;
    cout << "After prefix increment: ";
    p.display();

    p++;
    cout << "After postfix increment: ";
    p.display();

    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
