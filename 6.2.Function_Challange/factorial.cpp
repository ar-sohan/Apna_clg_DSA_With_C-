#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    int result = 1;

    for(int i=1; i<=n; i++){
        result *= i;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the number to find the factorial : ";
    cin >> n;
    cout << "The factorial is : " << factorial(n);
    return 0;
}
