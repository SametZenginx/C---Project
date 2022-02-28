#include <iostream>
using namespace std;
// if you use const, their values never change. be careful.

void printArray(const int *ptr1,const int *ptr2){

    // *ptr1 = 100 -> that gives error.

    for(;ptr1 != ptr2;ptr1++){
        cout << "Value: " << *ptr1 << endl;
    }
}
int main(){
    int array[] = {10,20,30,40,50,60,70,80,90,100}; 

    printArray(array+2,array+5);
    
    return 0;
}