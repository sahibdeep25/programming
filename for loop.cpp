#include <iostream>
using namespace std;
class Pyramid{
public:
    void printPyramid()
    {
        for(int i = 1; i <= 5; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
};
int main(){
    Pyramid p;      // Create object
    p.printPyramid(); // Call member function
    cout<<"Name: Sahibdeep Kaur"<<endl;
    cout<<"URN: 2514174"<<endl;
    return 0;
}