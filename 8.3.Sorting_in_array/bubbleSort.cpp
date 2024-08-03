#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp =arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Sorted with bubble  : ";
     bubbleSort(arr, n);

    return 0;
}



