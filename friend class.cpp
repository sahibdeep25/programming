#include <iostream>
using namespace std;
class SolarPlant{
private:
    string location[5] = {"Punjab", "Rajasthan", "Gujarat", "Haryana", "Maharashtra"};
    int revenue[5] = {500000, 650000, 550000, 450000, 600000};
    int expenses[5] = {150000, 200000, 180000, 120000, 170000};
    int employees[5] = {25, 35, 30, 20, 32};
    friend class Manager;
};
class Manager{
public:
    void showDetails(SolarPlant s){
        cout << "----Solar Plant Details----\n";
        for(int i = 0; i < 5; i++){
            cout << "Location  : " << s.location[i] << endl;
            cout << "Revenue   : Rs. " << s.revenue[i] << endl;
            cout << "Expenses  : Rs. " << s.expenses[i] << endl;
            cout << "Employees : " << s.employees[i] << endl;
            cout << "Profit    : Rs. "
                 << s.revenue[i] - s.expenses[i] << endl;
                 cout<<endl;
        }
    }
};
int main() {
    SolarPlant s;
    Manager m;
    m.showDetails(s);
    cout<<"Name: Sahibdeep Kaur\nURN: 2514174";
    return 0;
}