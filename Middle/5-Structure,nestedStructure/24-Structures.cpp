#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;
};
int main(){
    Employee employee1 = {43,"Mustafa Samet","Programming"}; 

    Employee employee2;

    employee2.name = "Ates";
    employee2.department = "Swift";
    employee2.id = 34;

    cout << employee2.name << " " << employee1.department << endl;

    return 0;
}