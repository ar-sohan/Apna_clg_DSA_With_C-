#include <bits/stdc++.h>
using namespace std;

string decimalToHexadecimal(int n){
    string result = "";
    int x = 1;
    while(x <= n){
        x *= 16;
    }
    x /= 16;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit * x;
        x /= 16;
        if(lastDigit <= 9){
            result = result + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            result.push_back(c);
        }
    }
    return result;

}

int main(){
    int n;
    cout << "Enter decimal to convert in hexadecimal : ";
    cin >> n;
    cout << "The number in hexadecimal is : " << decimalToHexadecimal(n) << endl;
    return 0;
}

