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

    int currSum[n+1];
    currSum[0] = 0;

    for(int i=0; i<n; i++){
        currSum[i] = currSum[i-1] + arr[i-1];
    }

     int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<i; j++){
            sum = currSum[i] - currSum[j];
            maxSum = max(sum, maxSum);
        }
    }

     cout << "The maximum sum of the sub arrays : " << maxSum << endl;

    return 0;
}

