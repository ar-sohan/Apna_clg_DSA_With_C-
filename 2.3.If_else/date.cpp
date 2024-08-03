#include <iostream>
using namespace std;

int main(){
    cout << "What is my budget today: ";
    int savings;
    cin >> savings;

    if(savings > 5000){
        if(savings > 10000){
            cout << "I will go to a dinner date"<< endl;
        }
        else{
            cout << "I will go to a normal date" << endl;
        }
    }
    else if(savings > 2000){
        if(savings > 4000){
            cout << "We will enjoy coffee of the famous cafe" << endl;
        }
        else{
            cout << "We will enjoy coffee in our nearest cafe" << endl;
        }
    }
    else if(savings > 1000){
        cout << "We will go for a walk" << endl;
    }
    else{
        cout << "Stop dreaming!"<< endl;
    }

    return 0;
}
