#include <iostream>
using namespace std;

int sum(int n){
    int result = 0;
    for(int i=0; i<=n; i++){
        result += i;
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the last number to add : ";
    cin >> n;
    cout << "The sum  is : " << sum(n);
    return 0;
}
