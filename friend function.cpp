#include <iostream>
using namespace std;
class SolarPlant {
    private:
        string location;
        int revenue, expenses, employees;
    public:
        SolarPlant(string l, int r, int e, int emp) {
            location = l;
            revenue = r;
            expenses = e;
            employees = emp;
        }
        friend void display(SolarPlant s);
};
void display(SolarPlant s) {
    cout << "Location  : " << s.location << endl;
    cout << "Revenue   : Rs. " << s.revenue << endl;
    cout << "Expenses  : Rs. " << s.expenses << endl;
    cout << "Employees : " << s.employees << endl;
    cout << "Profit    : Rs. " << s.revenue - s.expenses << endl;
    cout << endl;
}
int main() {
    SolarPlant s1("Punjab", 500000, 150000, 25);
    SolarPlant s2("Rajasthan", 650000, 200000, 35);
    SolarPlant s3("Gujarat", 550000, 180000, 30);
    SolarPlant s4("Haryana", 450000, 120000, 20);
    SolarPlant s5("Maharashtra", 600000, 170000, 32);
    cout << "-----Solar Plant Details-----" << endl;
    display(s1);
    display(s2);
    display(s3);
    display(s4);
    display(s5);
    cout << "Name: Sahibdeep Kaur" << endl;
    cout << "URN: 2514174" << endl;
    return 0;
}