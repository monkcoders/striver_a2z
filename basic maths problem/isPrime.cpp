#include<bits/stdc++.h>
using namespace std;

/*
Problem statement
A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.
You are given a number 'n'.
Find out whether 'n' is prime or not.
*/

bool isPrime(int n)
{
	// Write your code here.
	if(n==1) return false;
	for(int i=2; i<n; i++){
		if(n%i==0) return false;//if no. has factor other than 1 and itself then its not a prime no
	}
	return true;
}

bool isPrimeOptimized(int n)
{
	// Write your code here.
	if(n==1) return false;
	for(int i=2; i*i<=n; i++){//factors repeat after sqrt(n)
		if(n%i==0) return false;//if no. has factor other than 1 and itself then its not a prime no
	}
	return true;
}




int main(){
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
    cout<<isPrimeOptimized(n)<<endl;
    return 0;
}