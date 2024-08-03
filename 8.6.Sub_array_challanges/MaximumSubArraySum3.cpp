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

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        currSum += arr[i];
        if(currSum < n){
            currSum = 0;
        }
        maxSum = max (maxSum, currSum);
    }

     cout << "The maximum sum of the sub arrays : " << maxSum << endl;

    return 0;
}


