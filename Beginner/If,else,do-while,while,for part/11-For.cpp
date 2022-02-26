#include <iostream>
using namespace std;
/*
    int i;
    for(i=0;kosul;i++){
        
    }
*/
int main(){
    int numb;
    int fact = 1;

    cout << "Enter the number: ";
    cin >> numb;

    for (int i=1;i<=numb;i++){
        fact *= i;
    }
    cout << numb << "! = " << fact;
    return 0;
}