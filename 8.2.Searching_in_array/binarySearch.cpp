#include <iostream>
using namespace std;

bool binarySearch(int arr[], int n, int x){
    int start = 0;
    int last = n-1;
    while (start <= last){
        int middle = (start + last) / 2;
        if(arr[middle] == x){
            return true;
        }
        else if(arr[middle] < x){
            start = middle + 1;
        }
        else if(arr[middle] > x){
            last = middle - 1;
        }
    }
    return false;
}

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of a sorted array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int x;
    cout << "Enter a number to search in the array : ";
    cin >> x;
    if(binarySearch(arr, n, x)){
        cout << "Item found !";
    }
    else{
        cout << "Item not found !";
    }
    return 0;
}

