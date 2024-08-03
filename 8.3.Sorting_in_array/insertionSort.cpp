#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<=n-1; i++){
        int key = arr[i];
        int j = i -1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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

    cout << "Sorted with insertion  : ";
     insertionSort(arr, n);

    return 0;
}
