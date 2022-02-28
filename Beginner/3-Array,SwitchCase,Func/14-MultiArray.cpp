#include <iostream>
using namespace std;

/*
    int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
*/

int main(){
    int matris[3][3];
    cout << "Enter the matrix values: " << endl;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin >> matris[i][j];
        }
    }
    cout << endl;
    cout << "Your matrix is: " << endl;
    
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout << matris[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}