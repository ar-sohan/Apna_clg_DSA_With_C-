#include <iostream>
using namespace std;

int main(){
    cout << "Enter any number : ";
    int a;
    cin >> a;
    int sum = 0;
    for (int i=1; i<=a; i++){
        sum += i;
    }
    cout << "The sum from 1 to your inputted number is " << sum << endl;
    return 0;
}
