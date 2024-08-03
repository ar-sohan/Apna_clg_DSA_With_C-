#include <bits/stdc++.h>
using namespace std;

int check(int x, int y, int z){
    int a = max(x, max(y,z));
    int b, c;
    if(a==x){
        b=y;
        c=z;
    }
    else if(a == y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(pow(a, 2) == pow(b, 2) + pow(c, 2)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int x, y, z;
    cout << "Enter the three lengths to check pythagorian triplet : ";
    cin >> x >> y >> z;

    if(check(x, y, z)){
        cout << "It is a pythagorian triplet." << endl;
    }
    else{
        cout << "It is not a pythagorian triplet." << endl;
    }

    return 0;
}
