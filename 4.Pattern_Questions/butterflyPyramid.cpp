#include <iostream>
using namespace std;

int main(){

    int row;
    cout << "Enter the number of row : ";
    cin >> row;
    cout << "Here is your butterfly pattern: " << endl;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            cout << " * ";
        }
        int space = 2*row - 2*i;
        for(int j=1; j<=space; j++){
            cout << "   ";
        }
        for(int j=1; j<=i; j++){
            cout << " * ";
        }
        cout<< endl;
    }

    for(int i=row; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << " * ";
        }
        int space = 2*row - 2*i;
        for(int j=1; j<=space; j++){
            cout << "   ";
        }
        for(int j=1; j<=i; j++){
            cout << " * ";
        }
        cout<< endl;
    }
    return 0;
}
