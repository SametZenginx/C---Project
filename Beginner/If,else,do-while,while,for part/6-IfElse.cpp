#include <iostream>
using namespace std;

int main(){
    string id;
    string sysID = "Rexhn3443";
    cout << "Welcome to the system. waiting..." << endl;
    cout << "Enter the ID: ";
    cin >> id;
    if (id == sysID){
        cout << "Login successful." << endl;
    }
    else {
        cout << "Login failed." << endl;
    }
    return 0;
}