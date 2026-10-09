#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    int *p = arr;
    cout << "\nOriginal element: " << *p << endl;
    p++;
    cout << "After p++: " << *p << endl;
    p++;
    cout << "After another p++: " << *p << endl;
    p--;
    cout << "After p--: " << *p << endl;
    cout << "Element using p+2: " << *(p + 2) << endl;
    cout<<"Name: Sahibdeep Kaur\nURN: 2514174";
    return 0;
}