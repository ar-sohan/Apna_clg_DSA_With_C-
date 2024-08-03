#include <iostream>
using namespace std;

int main(){

    int row;
    cout << "Enter the number of row : ";
    cin >> row;
    cout << "Here is your inverted half pyramid : " << endl;
    for(int i=row; i>0; i--){
        for(int j=i; j>0; j--){
            cout << " * " ;
        }
        cout << endl;
    }
    return 0;
}

