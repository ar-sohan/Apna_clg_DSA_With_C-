#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter any number to check prime : ";
    cin >> n;
    bool flag = true;
    for(int i=2; i< sqrt(n); i++){
        if(n%i == 0){
            flag = false;
            break;
        }
    }

    if(flag == true){
        cout << "This number is prime .";
    }
    else{
        cout << "This number is not prime .";
    }
    return 0;
}
