#include <iostream>
using namespace std;
const float pi = 3.14;
class Silindir{
    public:
        int r;
        int h;
        float YuzeyAlanihesap();
        float Hacim();
};

float Silindir::YuzeyAlanihesap(){
    return 2*pi*r*h+2*pi*r*r;
}
float Silindir::Hacim(){
    return pi*r*r*h;
}
int main(){
    Silindir silindir1;
    cout << "Yukseklik(h): ";
    cin >> silindir1.h;
    cout << "Yaricap(r): ";
    cin >> silindir1.r;
    cout << "-----------------" << endl;
    cout << "Yuzey alani(A):" << silindir1.YuzeyAlanihesap() << endl;
    cout << "Hacmi (H): " << silindir1.Hacim() << endl;
    return 0;
    
}