#include <iostream>
using namespace std;
class Break{
public:
    void display(){
        for(int i = 1; i <= 10; i++){
            if(i == 6){
                break;
            }
            cout << i << " ";
        }
    }
};
int main()
{
    Break obj;     // Object creation
    obj.display();    // Function call
    cout<<endl;
    cout<<"Name: Sahibdeep Kaur"<<endl;
    cout<<"URN: 2514174"<<endl;
    return 0;
}