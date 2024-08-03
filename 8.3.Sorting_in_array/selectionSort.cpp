#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int minIdx = i;
        for(int j=i+1; j<n; j++){
            if(arr[minIdx] > arr[j]){
                minIdx = j;
            }
        }
        int temp =arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
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

    cout << "Sorted with selection  : ";
     selectionSort(arr, n);

    return 0;
}


