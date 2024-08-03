#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int result = 1;

    for(int i=1; i<=n; i++){
        result *= i;
    }
    return result;
}

int nCr(int n, int r){
     int output = factorial(n)/ (factorial(n-r) * factorial(r));
     return output;
}

int main(){
    int n;
    cout << "Enter the number of row for pascal triangle : ";
    cin >> n;
    cout << "The pascal series is : " << endl;
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << nCr(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}
