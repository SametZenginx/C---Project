#include <iostream>
using namespace std;

int sum(int a,int b,int c){
    return a+b+c; // The thing with return. It goes where it is called.
}

int main(){
    int numb1,numb2,numb3,sumNumbs;
    cout << "Enter the three numbers: " << endl;
    cin >> numb1;
    cin >> numb2;
    cin >> numb3;

    sumNumbs = sum(numb1,numb2,numb3); // This code, it is called here.
    // and it goes back here.
    
    cout << "The sum of the three numbers: " << sumNumbs << endl;

    return 0;
}
