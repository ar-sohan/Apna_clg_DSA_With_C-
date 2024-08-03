#include <iostream>
using namespace std;

int decimalToOctal(int n){
    int result = 0;
    int x = 1;
    while(x <= n){
        x *= 8;
    }
    x /= 8;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit * x;
        x /= 8;
        result = result*10 + lastDigit;
    }
    return result;

}

int main(){
    int n;
    cout << "Enter decimal to convert in Octal : ";
    cin >> n;
    cout << "The number in octal is : " << decimalToOctal(n) << endl;
    return 0;
}

