#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int mx = -1;
    for(int i =0; i<n; i++){
        mx  = max(mx,arr[i]);
    }
    return mx;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<largestElement(arr,n)<<endl;
    return 0;
}