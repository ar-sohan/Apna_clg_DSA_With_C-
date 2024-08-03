#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter any number to know if armstrong : ";
    cin >> n;

    int org  = n;
    int output = 0;
    while(n>0){
        int lastDigit = n%10;
        output += pow(lastDigit, 3);
        n = n/10;
    }

    if(org == output){
        cout <<"This is an armstrong number.";
    }
    else{
        cout << "This is not an armstrong number.";
    }

    return 0;
}
