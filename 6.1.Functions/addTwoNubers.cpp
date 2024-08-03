#include <iostream>
using namespace std;

void print(int a){
    cout << "The sum is : " << a;
}

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int main(){
    int a;
    int b;
    cout << "Enter two number to get the sum : ";
    cin >> a >> b;
    print(sum(a, b));
}
