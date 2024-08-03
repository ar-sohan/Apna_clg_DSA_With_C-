#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if(a%2 == 0 && a%3 == 0){
        cout << "Divisable by both 2 & 3" << endl;
    }
    else if(a%2 == 0 || a%3 == 0){
        cout <<  "Divisable by one of 2 & 3" << endl;
    }
    else {
        cout <<  "Divisable by none of 2 & 3" << endl;
    }
    return 0;
}
