#include <iostream>
using namespace std;

class Pattern
{
public:
    void printPattern()
    {
        for(int i = 1; i <= 5; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Pattern p;      // Object
    p.printPattern(); // Function call
    cout<<"Name: Sahibdeep Kaur"<<endl;
    cout<<"URN: 2514174"<<endl;
    return 0;
}