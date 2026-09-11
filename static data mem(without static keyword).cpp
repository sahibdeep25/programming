#include <iostream>
using namespace std;
class Student{
    int count;
public:
    Student(){
        count = 1;
    }
    void show(){
        cout << "Count: " << count << endl;
    }
};
int main(){
    Student s1, s2, s3;
    s1.show();
    s2.show();
    s3.show();
    cout<<"Name: Sahibdeep Kaur\nURN: 2514174";
    return 0;
}