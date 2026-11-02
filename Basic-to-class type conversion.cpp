
#include <iostream>
using namespace std;

class Student {
    int rollNo;

public:
    Student(int r) {
        rollNo = r;
    }

    void display() {
        cout << "Student roll number: "
             << rollNo << endl;
    }
};

int main() {
    int roll = 24;

    Student s = roll;
    s.display();

    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
