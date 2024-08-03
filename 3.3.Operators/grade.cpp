#include <iostream>
using namespace std;

int main(){
    int mark;
    cout << "Enter your mark : ";
    cin >> mark;

    if(mark >=90){
        cout << "You have got A+ grade!" << endl;
    }
    else if(mark >= 80){
        cout << "You have got B grade!" << endl;
    }
    else if(mark >=70){
        cout << "You have got C grade!" << endl;
    }
    else if(mark >=60){
        cout << "You have got D grade!" << endl;
    }
    else {
        cout << "Oh hell! You failed." << endl;
    }
    return 0;
}
