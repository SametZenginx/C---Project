#include <iostream>
using namespace std;
struct Employee{

    int age;
    string name;
    string department;
};
void showEmployee(Employee employee){
    cout << "Age:" << employee.age << endl;
    cout << "Name: " << employee.name << endl;
    cout << "Department: " << employee.department << endl;

}
int main(){
    int op;
    Employee emploMsz = {19,"Mustafa Samet","Developer"};
    Employee emploSait = {20,"Sait Ergun","Machine"};
    Employee emploAtes = {20,"Mehmet Ates","Masterfully uses swift."};

    cout << "Welcome to the system..." << endl;
    cout << "Which employee's information would you like to know: " << endl;;
    cout << "1-)Mustafa Samet / 2-)Sait Ergun / 3-)Mehmet Ates /::";
    cin >> op;
    if (op==1){
        showEmployee(emploMsz);
    }
    else if(op==2){
        showEmployee(emploSait);
    }
    else{
        showEmployee(emploAtes);
    }
    return 0;
}