#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter any number to reverse: ";
    cin >> n;

    int output;

    while(n > 0){
        int lastDigit = n%10;
        output = output * 10 + lastDigit;
        n = n/10;
    }

    cout << "In reverse number it becomes : " << output ;


    return 0;
}
