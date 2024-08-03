#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of row : ";
    cin >> n;
    cout << "Here is your rhombus pattern : " << endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n-1; j++){
            cout << " ";
        }
        for(int j=0; j<n; j++){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
