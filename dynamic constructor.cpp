#include <iostream>
using namespace std;
class Student{
    char *name;
    string sec;
    int urn;
public:
    // Dynamic Constructor
    Student(const char *n, string s, int u){
        int len = 0;
        while (n[len] != '\0')
            len++;
        name = new char[len + 1];
        for (int i = 0; i <= len; i++)
            name[i] = n[i];
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