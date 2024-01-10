#include<bits/stdc++.h>
using namespace std;

/*
Problem statement
There is a song concert going to happen in the city. The price of each ticket is equal to the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.
*/

long reverseBits(long n) {
    // Write your code here.
    long ans=0;
    for(int i=0; i<32; i++){
        ans = (ans<<1)|(n&1);
        n= n>>1;
    }
    return ans;
}

int main(){
    long n;
    cin>>n;
    cout<<reverseBits(n)<<endl;
    return 0;
}