#include <iostream>
using namespace std;

int main(){

    int row;
    cout << "Enter the size of the pattern : ";
    cin >> row;
    cout << "Here is your 0-1 pattern : " << endl;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2 == 0){
                cout << " 1 ";
            }
            else{
                cout << " 0 ";
            }
        }
        cout << endl;
    }

    return 0;
}
