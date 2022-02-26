#include <iostream>
using namespace std;

int main(){
    string sysPassword = "software";
    string input;
    do{
        cout << "Enter the password: ";
        cin >> input;
        
        if (input != sysPassword){
            cout << "Wrong password." << endl;
        }
    }while(input != sysPassword);

    cout << "Password is true.";

    return 0;
}