#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter any number : " ;
    cin >> n;
    int i;
    for(i=2; i<n; i++){
        if(n%i == 0){
           cout << "The number is not prime." << endl;
            break;
        }
    }
    if(i == n){
        cout << "The number is Prime" << endl;
    }
    return 0;
}

