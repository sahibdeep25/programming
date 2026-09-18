#include<iostream>
using namespace std;
class Product
{
protected:
    string productName;
    int price;
public:
    void getProduct()
    {
        cout<<"Enter Product Name: ";
        getline(cin>>ws,productName);
        cout<<"Enter Price: ";
        cin>>price;
    }
};
class Electronics:public Product
{
protected:
    string brand;
public:
    void getBrand()
    {
        cout<<"Enter Brand: ";
        getline(cin>>ws,brand);
    }
};
class Delivery
{
protected:
    string address;
public:
    void getAddress()
    {
        cout<<"Enter Delivery Address: ";
        getline(cin>>ws,address);
    }
};
class Order:public Electronics,public Delivery
{
public:
    void display()
    {
        cout<<"\n--- Order Details ---"<<endl;
        cout<<"Product: "<<productName<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Brand: "<<brand<<endl;
        cout<<"Delivery Address: "<<address<<endl;
    }
};
int main()
{
    Order o;
    o.getProduct();
    o.getBrand();
    o.getAddress();
    o.display();
    cout<<"\nName : Sahibdeep Kaur";
    cout<<"\nUrn : 2514174";
    return 0;
}