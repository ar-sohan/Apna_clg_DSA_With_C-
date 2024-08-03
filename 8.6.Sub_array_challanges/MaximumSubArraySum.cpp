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
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            }
        maxSum = max(maxSum, sum);
        }
    }

     cout << "The maximum sum of the sub arrays : " << maxSum << endl;

    return 0;
}
