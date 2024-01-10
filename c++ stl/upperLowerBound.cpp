#include <bits/stdc++.h>
using namespace std;




void BSandUBandLB(){
    //learninig about binary search, upper bound lower bound
    int arr[14] = {1,4,52,3,6,8,2,1,5,6,23,12,34,45};
    sort(arr,arr+14);
    for(auto ele : arr){
        cout<<ele<<" ";
    } cout<<endl;

    cout<<binary_search(arr,arr+14,6)<<endl;//if present returns 1 or true
    cout<<binary_search(arr,arr+14,7)<<endl;//if not present returns 0 or false

    //lower bound returns an iterator to  first occurence of the searched element if present
    //if the element is not present then it simply returns next greater element 
    //if the element is not present in the array an it is greater than last element
    // than it return address to next of last and this need to be kept in mind else may give runtime error
    //e.g in below code 2 is present in the array so it will return iterator to 2 
    //{1 1 2 3 4 5 6 6 8 12 23 34 45 52 }
    //returns iterator to value 2 address of 2 and substracting address of first element gives index 
    cout<<lower_bound(arr,arr+14,2)-arr<<endl;//getting index of element in array 
    cout<<"lower bound of 2 "<<arr[lower_bound(arr,arr+14,2)-arr]<<endl;//getting index of element in array 
    
    cout<<lower_bound(arr,arr+14,7)-arr<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    cout<<"lower bound of 7 "<<arr[lower_bound(arr,arr+14,7)-arr]<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    
    cout<<lower_bound(arr,arr+14,11)-arr<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    cout<<"lower bound of 11 "<<arr[lower_bound(arr,arr+14,11)-arr]<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    

    //upper bound returns iterator to the next greater element even if the element is present or not 
    //it may return out of bound index if element searched is greater than last element 
    //this condition must not be neglected 
    cout<<upper_bound(arr,arr+14,2)-arr<<endl;//getting index of element in array 
    cout<<"upper bound of 2 "<<arr[upper_bound(arr,arr+14,2)-arr]<<endl;//getting index of element in array 
    
    cout<<upper_bound(arr,arr+14,7)-arr<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    cout<<"upper bound of 7 "<<arr[upper_bound(arr,arr+14,7)-arr]<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    
    cout<<upper_bound(arr,arr+14,11)-arr<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    cout<<"upper bound of 11 "<<arr[upper_bound(arr,arr+14,11)-arr]<<endl;//return index of just next greater element i.e 8 as 7 not there in array 
    
    vector<int> vec = {1,4,52,3,6,8,2,1,5,6,23,12,34,45};
    sort(vec.begin(),vec.end());
    for(auto ele : vec){
        cout<<ele<<" ";
    } cout<<endl;
    cout<<binary_search(vec.begin(),vec.end(), 12)<<endl;
    cout<<*lower_bound(vec.begin(), vec.end(),12)<<endl;
    cout<<lower_bound(vec.begin(), vec.end(),12)-vec.begin()<<endl;
    cout<<*upper_bound(vec.begin(), vec.end(),12)<<endl;
    cout<<upper_bound(vec.begin(), vec.end(),12)-vec.begin()<<endl;

    //first occurence of a =n element in a sorted array
    int val  =53;
    int idx = lower_bound(vec.begin(), vec.end(), val)- vec.begin();
    if(idx<vec.size() && vec[idx]==val){
        cout<<val<<" at index "<<idx<<endl;
    }else{cout<<"element not present"<<endl;}

    //last occurence of a in a sorted array 
    int val1  =1;
    int idx1 = upper_bound(vec.begin(), vec.end(), val1)- vec.begin()-1;//this index can be between [-1,n-1] hence keep note of boundary cases 
    if(idx>=0 &&  vec[idx1]==val1){
        cout<<val1<<" last occurence at index "<<idx1<<endl;
    }else{cout<<"element not present"<<endl;}



}

int main()
{

   

    BSandUBandLB();


    return 0;
}