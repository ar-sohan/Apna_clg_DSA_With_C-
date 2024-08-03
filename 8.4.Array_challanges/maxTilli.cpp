#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int mx = -19999999;

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Max untill i is : ";
    for (int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout << mx  << " ";
    }
    cout << endl;
    return 0;
}
