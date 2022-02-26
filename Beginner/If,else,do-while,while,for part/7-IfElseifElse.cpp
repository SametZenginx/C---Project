#include <iostream>
using namespace std;

int main(){
    string option;
    int a,b;

    cout << "Welcome to the calculator...\n" << endl;

    cout << "1-Option: Addition" << endl;
    cout << "2-Option: Subtraction" << endl;
    cout << "3-Option: Multiplication" << endl;
    cout << "4-Option: Division\n" << endl;

    cout << "Numb-1: ";
    cin >> a;
    cout << "Numb-2: ";
    cin >> b;

    cout << "Choose what you want to do: ";
    cin >> option;

    if (option == "Addition"){
        cout << a << " + " << b << " = " << a+b;
    }
    else if (option == "Subtraction"){
        cout << a << " - " << b << " = " << a-b;
    }
    else if (option == "Multiplication"){
        cout << a << " x " << b << " = " << a*b;
    }
    else if (option == "Division"){
        cout << a << " / " << b << " = " << float(a)/float(b);
    }
    else{
        cout << "You made an incorrect keystroke.";
    }
    return 0;
}