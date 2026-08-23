#include <iostream>
#include <cstring>
using namespace std;
class Student{
    char *name;
    string sec;
    int urn;
public:
    // Dynamic Constructor
    Student(const char *n, string s, int u){
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        sec = s;
        urn = u;
    }
    void display(){
        cout << "Name : " << name << endl;
        cout << "Sec  : " << sec << endl;
        cout << "URN  : " << urn << endl;
    }
    ~Student(){
        delete[] name;
    }
};
int main(){
    Student s1("Sahibdeep Kaur", "CSE-1", 2514174);
    s1.display();
    return 0;
}