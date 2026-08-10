#include <iostream>
using namespace std;
class Number
{
public:
    void display()
    {
        int i = 1;

        do
        {
            cout << i<<" " ;
            i++;
        }
        while(i <= 10);
    }
};
int main()
{
    Number n;
    n.display();
    cout<<endl;
    cout<<"Name: Sahibdeep Kaur"<<endl;
    cout<<"URN: 2514174"<<endl;
    return 0;
}