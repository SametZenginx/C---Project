#include <iostream>
using namespace std;

// Basic information about the c++ function.
void factorial(int a); // This is prototype.
// If you use function for under the main function. 
// You have to use prototype. it has a very simple structure.

void doingHi(){

    cout << "Hi guys." << endl;
    cout << "How r u? " << endl;

}


int main(){
    int x;
    doingHi();

    cout << "Choose the number you want the factorial for: ";
    cin >> x;
    factorial(x);

    return 0;
}

void factorial(int a){
    int fact = 1;

    for (int i = 1;i<=a;i++){
        fact = fact * i;
    }
    cout << a << ".factorial's is : " << fact;

}
