#include <iostream>
using namespace std;
class Continue{
public:
    void display(){
        for(int i = 1; i <= 10; i++){
            if(i == 6){
                continue;
            }
            cout << i << " ";
        }
    }
};
int main(){
    Continue obj;   // Object creation
    obj.display();      // Function call
    cout<<endl;
    cout<<"Name: Sahibdeep Kaur"<<endl;
    cout<<"URN: 2514174"<<endl;
    return 0;
}