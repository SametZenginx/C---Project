#include <iostream>
using namespace std;
/*
break = break the loop and ends.
continue = loop returns to the beginning without executing the commands under it.
*/
int main(){
    string sysUsername = "MustafaSamet";
    string sysPassword = "Msz123";
    string username,password;
    int i = 3;
    while (i > 0){
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        if(sysUsername == username && sysPassword == password){
            cout << "Successfull.";
            break;
        } 
        else if(sysUsername != username && sysPassword != password){
            cout << "Wrong username and password." << endl;
        }
        else if(sysUsername == username && sysPassword != password){
            cout << "Wrong password." << endl;           
        }
        else{
            cout << "Wrong username." << endl;        
        }
        i++;
    }
    return 0;
}