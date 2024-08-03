#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    int num1 = 0;
    int num2 = 1;
    int sum = 0;
    for(int i=1; i<n; i++){
        cout << num1 << "  ";
        sum = num1 + num2;
        num1 = num2;
        num2 = sum;
    }
    return;
}

int main(){
    int n;
    cout << "Enter the number of sequences : ";
    cin >> n;
    fibonacci(n);
    return 0;
}
