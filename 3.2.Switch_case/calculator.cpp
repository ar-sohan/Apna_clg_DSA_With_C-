#include <iostream>
using namespace std;

int main(){
    float a, b;
    char c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the operator : ";
    cin >> c;
    cout << "Enter the second number: ";
    cin >> b;

    switch(c){
        case '+':
            cout << "The sum is " << a+b << endl;
            break;
        case '-':
            cout << "The substraction is " << a-b << endl;
            break;
        case '*':
            cout << "The product is " << a*b << endl;
            break;
        case '/':
            cout << "The division is " << a/b << endl;
            break;
        default:
            cout << "Enter another character." << endl;
            break;
    }
    return 0;
}
