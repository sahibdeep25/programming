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
    return 0;
}