#include <iostream>
using namespace std;

int main(){
    int money = 3000;

    for (int i=0; i<=10; i++){
        if(i % 2 == 0){
            continue;
        }
        if(money == 0){
            break;
        }
        cout << "I will eat chicken dinner" << endl;
        money -= 300;
    }

    return 0;
}
