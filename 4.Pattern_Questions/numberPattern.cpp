#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of row : ";
    cin >> n;
    cout << "Here is your number pattern : " << endl;
    for(int i=1; i<=n; i++){
        for(int j=i; j<=n-1; j++){
            cout << " ";
        }
        int output = 1;
        for(int j=1; j<=i; j++){
            cout << " " << output << " ";
            output++;
        }
        cout << endl;
    }
    return 0;
}
