#include<bits/stdc++.h>
using namespace std;

/*
Problem statement
You are given two integers 'n', and 'm'.
Calculate 'gcd(n,m)', without using library functions.
Note:
The greatest common divisor (gcd) of two numbers 'n' and 'm' is the largest positive number that divides both 'n' and 'm' without leaving a remainder.
*/

int calcGCD(int n, int m){
    // Write your code here.
    int gcd=0;
    for(int i=1; i<=min(n,m); i++){
        if(n%i==0 && m%i==0){//largest no that divides both n and m  
            gcd=i;
        }
    }
    return gcd;
}


int calcGCDNonPrimeOptimized(int n, int m){
    // Write your code here.
    int gcd=0;
    for(int i=min(n,m); i>=1; i--){
        if(n%i==0 && m%i==0){//largest no that divides both n and m  
            gcd=i;          //optimized non prime values but for primetakes O(n)
            break;
        }
    }
    return gcd;
}

int calcGCDOptimized(int n, int m){
    // Write your code here.
    while(n>0 && m>0){//gcd(a,b) = gcd(a-b,b)=> gcd(a,b) =gcd(a%b,b)
        if(n>m) n=n%m;
        else m= m%n;
    }
    if(n==0) return m;
    else return n;
}

int calcGCDOptimizedRecursive(int n, int m){
    if(m>n) return calcGCDOptimizedRecursive(m,n);
    if(m==0) return n;
    return calcGCDOptimizedRecursive(m, n%m);
}

//lcm = a*b/gcd
int main(){
    int n,m;
    cin>>n>>m;
    cout<<calcGCD(n,m)<<endl;
    cout<<calcGCDNonPrimeOptimized(n,m)<<endl;
    cout<<calcGCDOptimized(n,m)<<endl;
    cout<<calcGCDOptimizedRecursive(n,m)<<endl;
    return 0;
}