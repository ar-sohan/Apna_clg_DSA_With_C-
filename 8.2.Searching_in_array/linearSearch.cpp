#include <iostream>
using namespace std;

bool linerSearch(int arr[], int n, int x){
    for(int i=0; i<n; i++){
            if(arr[i] == x){
                return true;
            }
            else{
                return false;
            }
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
    int x;
    cout << "Enter a number to search in the array : ";
    cin >> x;
    if(linerSearch( arr, n, x)){
        cout << "Item found !";
    }
    else{
        cout << "Item not found !";
    }
    return 0;
}
