#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "Enter the array size : ";
    cin >> n;
     int arr[n];
    cout << "Enter the elements : ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int maxNum = INT_MIN; //min integer in c++
    int minNum = INT_MAX; //max integer in c++

    for(int i=0; i<n; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
        // second approach
        maxNo = max(maxNo, arr[i]);
        if(arr[i] < minNum){
            minNum = arr[i];
        }
        // second approach
        minNo = min(minNo, arr[i]);
    }
    cout << "The maximum number in the array is : " << maxNum << endl;
    cout << "The minimum number in the array is : " << minNum << endl;

    return 0;
}
