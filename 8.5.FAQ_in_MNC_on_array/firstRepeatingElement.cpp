#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    const int N = 1e2+2;

    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }

    int minIdx= INT_MAX;

    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            minIdx = min(minIdx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i ;
        }
    }

    if(minIdx == INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << "The index of the first repeating element is : " << minIdx + 1 << endl;
    }

    return 0;
}
