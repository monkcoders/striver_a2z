#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[], int n){
    int mx = -1;
    for(int i =0; i<n; i++){
        mx  = max(mx,arr[i]);
    }
    return mx;
}

int secondLargest(int arr[], int n){
    int first = largestElement(arr,n);
    int second =-1;
    for(int i =0; i<n; i++){
        if(arr[i]!=first && second<arr[i]){
            second= arr[i];
        }
    }
    return second;
}

int secondLargestAlternative(int arr[], int n){
    int first = -1;
    int second = -1;
    for(int i =0; i<n; i++){
        if(first<arr[i]){
            second = first;
            first =arr[i];

        }else if(arr[i]!=first && second<arr[i]){
            second = arr[i];
        }
    }
    return second;
}

int remove_duplicateSorted(int arr[],int n){
       
        int j=1;
        for(int i =1; i<n; i++){
            if(arr[i]!=arr[i-1]){
                arr[j] = arr[i];
                j++;
            }
        }
        return j;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<largestElement(arr,n)<<endl;
    cout<<secondLargest(arr,n)<<endl;
    cout<<secondLargestAlternative(arr,n)<<endl;
    cout<<remove_duplicateSorted(arr,n)<<endl;
    
    return 0;
}