#include <iostream>
using namespace std;

/* Variable type and variables
int float double char bool */

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