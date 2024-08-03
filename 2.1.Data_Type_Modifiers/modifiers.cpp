#include <iostream>
using namespace std;

int main(){
    long int a = 20;
    short int b = 30;
    int c = -10;
    int d = 20;

    cout << "The size of " << a << " is : " << sizeof(a) << endl;
    cout << "The size of " << b << " is : " << sizeof(b) << endl;
    cout << "The size of " << c << " is : " << sizeof(c) << endl;
    cout << "The size of " << d << " is : " << sizeof(d) << endl;

    return 0;
}
