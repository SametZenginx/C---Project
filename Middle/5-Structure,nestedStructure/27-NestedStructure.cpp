#include <iostream>
using namespace std;

struct Address{

    string cityName;
    int doorNo;

};
struct Employee{
    int id;
    string name;
    string department;
    Address address;
};

int main(){

    Employee msz = {12,"Mustafa Samet Zengin","Programming",{"Duzce",5}};

/* 
    msz.address.cityName = "Duzce"; or 
    msz.name = "Mustafa Samet Zengin"; 
    This way we can assignment later.
*/

    cout << msz.id << endl;
    cout << msz.name << endl;
    cout << msz.department << endl;
    cout << msz.address.cityName << endl;
    cout << msz.address.doorNo << endl;
    
    return 0;
}