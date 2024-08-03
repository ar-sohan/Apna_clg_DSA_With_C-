#include <iostream>
using namespace std;

void sumOfSubArrays(int arr[], int n){
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
                sum += arr[j];
                cout << sum << "  ";
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    cout << "The sum of all the sub-arrays : ";
    sumOfSubArrays(arr, n);
    return 0;
}
