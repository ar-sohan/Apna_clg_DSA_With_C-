#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of row : ";
    cin >> n;
    cout << "Here is your zig-zag pattern : " << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=9; j++){
            if((i+j) % 4 == 0){
                cout << " * ";
            }
            else if(i==2 && j%4 == 0){
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}
