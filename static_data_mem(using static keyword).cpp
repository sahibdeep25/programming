#include <iostream>
using namespace std;
class Student{
    static int count;
public:
    Student(){
        count++;
    }
    void show(){
        cout << "Number of Students: " << count << endl;
    }
};
int Student::count = 0;
int main(){
    Student s1, s2, s3;
    s1.show();
    cout<<"Name: Sahibdeep Kaur\nURN: 2514174";
    return 0;
}