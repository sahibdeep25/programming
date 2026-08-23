#include <iostream>
using namespace std;
int main(){
    cout<<"Name: Sahibdeep Kaur\nUrN: 2514174\n";
    class Calculator{
        int a, b;
    public:
        void getData(){
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }
        void add(){
            cout << "Sum = " << a + b;
        }
    };
    Calculator c;
    c.getData();
    c.add();
    return 0;
}