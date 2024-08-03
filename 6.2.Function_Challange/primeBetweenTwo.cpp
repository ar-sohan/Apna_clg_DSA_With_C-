#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a){
        for(int i=2; i<a; i++){
            if(a%i == 0){
              return false;
            }
        }
        return true;
}

int main(){
    int a, b;
    cout << "Enter two numbers to find the primes between : ";
    cin >> a >> b;
    cout << "The prime numbers are : ";
     for(int i=a; i<b; i++){
        if (isPrime(i)){
            cout << i  << " ";
        }
     }
    return 0;
}
