#include<iostream>
using namespace std;
class Student{
public:
    string name;
    char sec;
    int urn;
// Default Constructor
    Student(){
        name = "Sahibdeep Kaur";
        sec = 'E';
        urn = 2514174;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Section: " << sec << endl;
        cout << "URN: " << urn << endl;
    }
};
int main(){ 
    Student s1;      // Default constructor is called automatically
    s1.display();
    return 0;
}