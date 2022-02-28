#include <iostream>
using namespace std;

/* Variable type and variables
int a = 5;
float b = 3,24;
double c = 85,9424;
char a = 'A'
string b = "Mustafa Samet"
bool c = true // false
     */

const double pi = 3.14159;

int main(){
    float r;
    double areaCircle;
    
    cout << "Enter the radius of the circle: ";
    cin >> r;
    areaCircle = r*r*pi;
    cout << "Area of the circle is " << areaCircle;
    
    return 0;
}