#include <iostream>
using namespace std;

int main(){

    int num; //declaration
    num = 10; //initialization
    cout << "The size of integer is " << sizeof(num) << endl;

    float pi = 3.1416;
    cout << "The size of float is " << sizeof(pi) << endl;

    double money = 100.0002345;
    cout << "The size of double is " << sizeof(money) << endl;

    char letter = 'S';
    cout << "The size of char is " << sizeof(letter) << endl;//

    // getting the ascii value of a character

    int love = 'n';
    cout << "Ascii value of n is: " << love << endl;
    return 0;
}
