#include<bits/stdc++.h>
using namespace std;

/*
Problem statement
Check whether a given number ’n’ is a palindrome number.
*/


int reverseNo(int n){
    int rev = 0;
    while(n>0){
        rev= rev*10+(n%10);
        n/=10;
    }
    return rev;
}

bool palindrome(int n)
{
    // Write your code here
    if(n==reverseNo(n)) return true;
    return false;
    
}


int main(){
    int n;
    cin>>n;
    cout<<palindrome(n)<<endl;
    return 0;
}