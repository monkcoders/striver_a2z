#include<bits/stdc++.h>
using namespace std;

/*
Problem statement
You are given an integer 'n'.
Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.
Note:
An Armstrong number is a number (with 'k' digits) such that the sum of its digits raised to 'kth' power is equal to the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.
*/


bool checkArmstrong(int n){
	//Write your code here

	int k =(int)log10(n)+1;
	int x= n;
	int arm= 0;
	int rem=0;
	while(x>0){
		rem = x%10;
		arm = arm+pow(rem,k);
		x = x/10;

	}
	if(arm==n) return true;
	return false;
}


int main(){
    int n;
    cin>>n;
    cout<<checkArmstrong(n)<<endl;
    return 0;
}