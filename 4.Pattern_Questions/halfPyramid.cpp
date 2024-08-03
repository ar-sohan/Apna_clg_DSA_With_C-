#include <iostream>
using namespace std;

int main(){

    int row;
    cout << "Enter the number of row : ";
    cin >> row;
    cout << "Here is your rectangle pattern: " << endl;
    for(int i=0; i<row; i++){
    //with conditionals
        /*for(int j=0; j<row; j++){
            if(j<=row-i){
                cout << "   ";
            }
            else{
                cout << " * ";
            }
        }*/
        for(int j=row-i; j>0; j--){
            cout << "   " ;
        }
        for(int j=0; j<i; j++){
            cout << " * " ;
        }
        cout << endl;
    }
    return 0;
}

