#include <iostream>
using namespace std;
class Student{
protected:
    int roll;
    string name;
public:
    void getRoll(){
        cout<<"Enter name: ";
        getline(cin,name);
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};
class Test : virtual public Student{
protected:
    int marks;
public:
    void getMarks(){
        cout << "Enter Academic Marks: ";
        cin >> marks;
    }
};
class Sportsvirtual public Student{
protected:
    int score;
public:
    void getScore(){
        cout << "Enter Sports Score: ";
        cin >> score;
    }
};
class Result : public Test, public Sports{
public:
    void display(){
        cout << "\n--- Result ---" << endl;
        cout<<"Name: "<<name<<endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
    }
};
int main(){
    Result r;
    r.getRoll();
    r.getMarks();
    r.getScore();
    r.display();
    return 0;
}