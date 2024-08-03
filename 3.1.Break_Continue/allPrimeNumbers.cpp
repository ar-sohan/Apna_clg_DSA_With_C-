#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the lower limit : ";
    cin >> a;
    cout << "Enter the upper limit : ";
    cin >> b;

    for(int i=a; i<=b; i++){
        int j;
        for(j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
        }
        if(j == i){
            cout << i << " ";
        }
    }

    return 0;
}

