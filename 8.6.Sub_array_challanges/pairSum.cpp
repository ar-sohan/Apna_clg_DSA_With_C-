#include <bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int k){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(arr[i] + arr[j] == k){
                cout << i << " " << j << endl;
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;

    cout << pairSum(arr, 8, k) << endl;

    return 0;
}
