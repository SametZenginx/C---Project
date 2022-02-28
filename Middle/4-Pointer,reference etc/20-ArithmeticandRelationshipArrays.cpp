#include <iostream>
using namespace std;
int main(){
    string array[] = {"Mustafa","Samet","Zengin"};

    // array[1] = *(ptr + 1)

    string *ptr = array;

    cout << ptr + 1 << endl;
    cout << ptr[1] << endl;

    return 0;
}