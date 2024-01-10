#include <bits/stdc++.h>
using namespace std;


bool myComp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second){
        return true;
    }else if(p1.second>p2.second){
        return false;
    }else{
        return p1.first>p2.first;
    }
}

void extraExplanation(){
    int arr[5] ={8 ,2 , 4, 5,1};
    for(auto ele : arr){
        cout<<ele<<" ";
    } cout<<endl;



    sort(arr,arr+5);//sort(first, last+1) sorts all elements between first and last or [first,last+1)
 
    for(auto ele : arr){
        cout<<ele<<" ";
    } cout<<endl;
    //sorts array in descending order
    sort(arr,arr+3, greater<int>());//[0,3) i.e 0, 1,2 index 
    for(auto ele : arr){
        cout<<ele<<" ";
    } cout<<endl;

    vector<int> v= {1,2,3,4,5};
    
    for(auto ele : v){
        cout<<ele<<" ";
    } cout<<endl;
    sort(v.begin(), v.end(), greater<int>());
    //sorts elements in descending order
    for(auto ele : v){
        cout<<ele<<" ";
    } cout<<endl;

    pair<int, int> myPairs[4]= {{4,2},{3,1}, {3,3},{5,3}};
    for(auto ele : myPairs){
        cout<<ele.first<<" "<<ele.second<<endl;
    } cout<<endl;
    
    //sorting above array pf pairs into 
    //ascending order on basis of second element of pair 
    //if two second element are same then we sort them on basis of first element in descending

    sort(myPairs,myPairs+4,myComp);
    for(auto ele : myPairs){
        cout<<ele.first<<" "<<ele.second<<endl;
    } cout<<endl;


    int n = 123;
    cout<<__builtin_popcount(n)<<endl;

    
    long long n1 = 123455789014271;
    cout<<__builtin_popcountll(n1)<<endl;

    cout<<*(max_element(v.begin(), v.end()))<<endl;//for array returns pointer and for other stl containers return iterator which can only be dereferenced 
    cout<<*(min_element(arr,arr+5))<<endl;//returns pointer to min element as array is passed

    string s,s1;
    s = s1 = "231";
    //for print all the permutations of a string we must first get its sorted string and then apply next permutation
    //else it will print only till last permutation from current permutations

    do{
        cout<<s<<" " ;

    }while(next_permutation(s.begin(), s.end()));
    cout<<endl;

cout<<s<<" "<<s1<<endl;
//sort string to get all permutations 
sort(s1.begin(), s1.end());

do{
        cout<<s1<<" " ;

    }while(next_permutation(s1.begin(), s1.end()));
    cout<<endl;



    



}

int main()
{
    extraExplanation();

    return 0;
}