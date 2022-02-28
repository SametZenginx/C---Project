#include <iostream>
using namespace std;
int toCompare(int a,int b){
    if (a > b){
        return a;
    }
    else if(b > a){
        return b;
    }
}
int main(){
    int a,b,bigNumb;
    cout << "Enter the two number: " << endl;
    cin >> a >> b;

    bigNumb = toCompare(a,b);
    
    cout << "The big numb is " << bigNumb;
    return 0;
}