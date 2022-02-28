#include <iostream>
using namespace std;

void changeValue(int &ref){

    ref = 20;

}
int main(){
    int a = 10;

    cout << "first value: " << a << endl;

    changeValue(a);

    cout << "second value: " << a << endl;

    return 0;
}