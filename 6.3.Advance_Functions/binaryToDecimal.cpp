#include <iostream>
using namespace std;

int binaryTodecimal(int n){
    int result = 0;
    int x = 1;
    while(n > 0){
        int y = n % 10;
        result += x * y;
        x *= 2;
        n /= 10;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter binary to convert in decimal : ";
    cin >> n;
    cout << "The number in decimal is : " << binaryTodecimal(n) << endl;
    return 0;
}
