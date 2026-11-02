
#include <iostream>
using namespace std;

class Result {
    int marks;

public:
    Result(int m) {
        marks = m;
    }

    operator int() {
        return marks;
    }
};

int main() {
    Result r(268);

    int totalMarks = r;

    cout << "Total marks: " << totalMarks << endl;

    cout << "\nName: Sahibdeep Kaur";
    cout << "\nURN: 2514174";

    return 0;
}
