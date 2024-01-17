#include<bits/stdc++.h>
using namespace std;


void print1toN(int n){
    if(n==0) return;
    print1toN(n-1);
    cout<<n<<" ";
}

void printNto1(int n){
    if(n==0) return;
    cout<<n<<" ";
    print1toN(n-1);
}

int sumOfFirstN(int n){
    if(n==1) return 1;
    return n+sumOfFirstN(n-1);
}

long long factorial(long long n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

void reverseArray(int arr[], int n, int i){
    if(i>=n-1) return;
    swap(arr[i],arr[n-1]);
    reverseArray(arr,n-1,i+1);
}

bool palindrome(int arr[], int n, int i){
    if(i>=n-1) return true;
    if(arr[i]!=arr[n-1]) return false;
    return palindrome(arr,n-1,i+1);
}

long long fibonacci(long long n){
    if(n<=1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    print1toN(n);
    cout<<endl;
    
    printNto1(n);
    cout<<endl;

    cout<<sumOfFirstN(n)<<endl;
    cout<<factorial(n)<<endl;

    reverseArray(arr,n,0);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    cout<<endl;

    cout<<palindrome(arr,n,0)<<endl;
    cout<<fibonacci(n)<<endl;


    
    return 0;
}