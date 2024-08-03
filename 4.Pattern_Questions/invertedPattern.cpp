#include <iostream>
using namespace std;

int main(){

    int row;
    cout << "Enter the number of row : ";
    cin >> row;
    cout << "Here is your inverted Pattern : " << endl;
    for(int i=1; i<=row; i++){
        int output = 1;
        for(int j=row; j>=i; j--){
            cout << " " << output << " ";
            output++;
        }
        cout << endl;
    }

    return 0;
}
