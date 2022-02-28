#include <iostream>
using namespace std;

struct Employee{
    int id;
    string name;
    string department;
};
int main(){
    Employee employee1 = {43,"Mustafa Samet","Programming"}; 
    
    Employee *ptr = &employee1;

    cout << ptr->name << endl; // we can access structure with '->' 

    return 0;
}