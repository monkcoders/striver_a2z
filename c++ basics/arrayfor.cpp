#include<bits/stdc++.h>
using namespace std;
/*
functions are set of code which performs something for you 
functions are used to modularise coee functions are used to increase readability 
functions are used to reuse same code multiple times 
*/
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arr[2];
    int arr2[5];
    for(int i=0; i<5; i++){
        cin>>arr2[i];
    }
    int i=0;
    while(i<5){
        cout<<arr[i]<<i<<endl;
        i++;
    }
    string s = "hello";
    int size = s.length();
    i=0;
    do{
        cout<<s[i]<<endl;
        i++;
    }while(i<size);
    return 0;
}