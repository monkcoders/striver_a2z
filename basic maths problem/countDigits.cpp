#include<bits/stdc++.h>
using namespace std;

/*
Problem statement
You are given a number ’n’.
Find the number of digits of ‘n’ that evenly divide ‘n’.
*/

int countDigits(int n){
	// Write your code here.
	int x = n,cnt=0;
	int digit=0;
	while(x>0){
		digit = x%10;
		if(digit && n%digit==0){
			cnt++;
		}
		x/=10;
	}
		
	return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<countDigits(n)<<endl;
    return 0;
}