#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int j = 1;
    while (i < 10 && j < 5){
        cout << "i: " << i << "j: " << j << endl;
        j++;
        i++;
    }
    cout << "While is over.";
    return 0;
}