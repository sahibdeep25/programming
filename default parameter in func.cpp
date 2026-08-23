#include <iostream>
using namespace std;
class Calculator{
public:
    int addition(int a, int b = 10){
        return a + b;
    }
};
int main(){
    Calculator c;
    cout<<"Name: Sahibdeep Kaur\n";
    cout<<"URN: 2514174\n";
    cout << "Addition of 20 and 30 = " << c.addition(20, 30) << endl;
    cout << "Addition of 20 and default value = " << c.addition(20) << endl;
    return 0;
}