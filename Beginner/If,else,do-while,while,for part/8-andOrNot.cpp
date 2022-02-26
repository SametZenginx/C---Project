#include <iostream>
using namespace std;

/*
and operator = &&
or operator = ||
not operator = !
*/

int main(){
    string sysUsername = "rexhn43";
    string sysPassword = "12345";
    string username,password;

    cout << "Welcome to the System...\n" << endl;
    cout << "ID: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    if (username == sysUsername && password == sysPassword){
        cout << "Welcome Sir." << endl;
    }
    else if (username != sysUsername && password == sysPassword){
        cout << "Wrong username." << endl;
    }
    else if (username != sysUsername && password != sysPassword){
        cout << "Wrong username and password." << endl;
    }
    else{
        cout << "Wrong password." << endl;
    }

    return 0;
}
