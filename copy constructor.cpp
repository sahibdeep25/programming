#include <iostream>
using namespace std;
class Student{
    string name;
    string sec;
    int urn;
public:
    // Parameterized Constructor
    Student(string n, string s, int u){
        name = n;
        sec = s;
        urn = u;
    }
    // Copy Constructor
    Student(Student &s){
        name = s.name;
        sec = s.sec;
        urn = s.urn;
    }
    void display(){
        cout << "Name : " << name << endl;
        cout << "Section  : " << sec << endl;
        cout << "URN  : " << urn << endl;
    }
};
int main(){
    Student s1("Sahibdeep Kaur", "CSE-E1", 2514174);
    cout << "Original Object" << endl;
    s1.display();
    Student s2 = s1;   // Copy Constructor Called
    cout << "\nCopied Object" << endl;
    s2.display();
    return 0;
}