#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the expected sum : ";
    cin >> s;

    int arr[n];
    cout << "Enter the elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int i=0;
    int j=0;
    int st=1;
    int en=1;
    int sum=0;

    while (j<n && sum+arr[j] <= s){
        sum += arr[j];
        j++;
    }

    if(sum == s){
        cout << "Short answer of st and en : " << i+1 << " " << j << endl;
        return 0;
    }

    while(j<n){
        sum += arr[j];
        while (sum > s){
            sum -= arr[j];
            i++;
        }
        if(sum == s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << "The start and end index are : " << sum <<st << " " << en << endl;

    return 0;
}
