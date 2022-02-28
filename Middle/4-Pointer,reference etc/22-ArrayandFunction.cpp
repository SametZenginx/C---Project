#include <iostream>
using namespace std;

void printArray(int array[],int size){ // array[] => *ptr
    for(int i = 0;i<size;i++){
        cout << array[i] << endl; // array[i] => ptr[i] 
    }

}
int main(){
    int a[] = {1,2,3,4,5};
    printArray(a,5);

    return 0;
}