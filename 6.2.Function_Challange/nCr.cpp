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
    int n , r;
    cout << "Enter n & r to find nCr : ";
    cin >> n >> r;
    cout << "Your result is : " << nCr(n,r);
    return 0;
}
