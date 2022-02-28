#include <iostream>
using namespace std;
void changeValue(int *ptr){
    *ptr = 15;
}
int main(){
    int a = 10;
    cout << "Variable a value is : " << a << endl;
    changeValue(&a); 
    cout << "The value of a after the function ends: " << a << endl;

    return 0;
}