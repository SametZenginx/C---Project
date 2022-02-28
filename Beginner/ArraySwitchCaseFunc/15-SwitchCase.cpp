#include <iostream>
using namespace std;
int main(){
    int operation;

    cout << "Enter the operation: ";

    cin >> operation;

    switch(operation){
        case 1:
            cout << "You have chosen the 1st operation.";
            break;
        case 2:
            cout << "You have chosen the 2nd operation.";
            break;
        case 3:
            cout << "You have chosen the 3rd operation.";
            break;

        default:
            cout << "invalid operation.";
            break;
    }
    return 0;
}