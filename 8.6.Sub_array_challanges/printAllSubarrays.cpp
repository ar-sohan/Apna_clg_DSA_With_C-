#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements : " ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Here are the sub arrays : ";

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
                for(int k=i; k<=j; k++){
                     cout << arr[k] << " ";
            }
        cout << endl;
        }
    }

    return 0;
}

