#include <iostream>
using namespace std;

void longestAithmeticSubArray(int arr[], int n){
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;

    while(j<n){
        if(pd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
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
    cout << "The size of the longest arithmetic sub array is : ";
    longestAithmeticSubArray(arr, n);
    return 0;
}
