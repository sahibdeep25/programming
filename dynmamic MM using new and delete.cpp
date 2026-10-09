#include <iostream>
using namespace std;
class BankAccount{
    string holder;
    double balance;
public:
    void getData(){
        cout << "Enter Account Holder Name: ";
        cin >> holder;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }
    void display(){
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << holder << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main(){
    BankAccount *account = new BankAccount;
    account->getData();
    account->display();
    delete account;
    return 0;
}