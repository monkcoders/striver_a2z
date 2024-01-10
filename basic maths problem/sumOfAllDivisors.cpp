#include<bits/stdc++.h>
using namespace std;

/*
Problem statement
You are given an integer ‘n’.
Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.
Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.
*/


int sumOfAllDivisors(int n){
	// Write your code here.	
	int sum = 0;
	for(int i =1;i<=n; i++){
		for(int j=1; j*j<=i; j++){
			if(i%j==0){
			    sum+=j;
				if(i/j!=j) sum+=i/j;
			}
			
		}
	}
	return sum;
}

int sumOfAllDivisorsOptimized(int n){

	int sum=0;
	for(int i =1; i<=n; i++){
		sum= sum+ (i*(int(n/i)));
	}
	return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfAllDivisors(n)<<endl;
    cout<<sumOfAllDivisorsOptimized(n)<<endl;
    return 0;
}