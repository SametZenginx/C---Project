#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout << "Variable's address: " << &a << endl;
    cout << "Variable's address: " << ptr << endl;
    cout << "Variable's value: " << *ptr << endl;

    *ptr = 6;

    cout << a; // New value.    
    
    return 0;
}