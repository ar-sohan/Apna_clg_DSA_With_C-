#include <iostream>
using namespace std;

int main(){
    int array1[4] = {10, 20, 30, 40};
    cout << array1[2] << endl;

    int n;
    cout << "Enter the size of your array : ";
    cin >> n;
    int array2[n];
    for(int i=0; i<n; i++){
        cin >> array2[i];
    }
    cout << "Your array is : " ;
    for(int i=0; i<n; i++){
        cout << array2[i] << " ";
    }
    cout << endl;

    return 0;
}
