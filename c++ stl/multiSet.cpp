#include <bits/stdc++.h>
using namespace std;


void  explainMultiSet(){
    //everything is same as set 
    //only stores duplicate eleemnts also 

    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    for(auto i: ms){
        cout<<i<<" ";
    }cout<<endl;


    int cnt = ms.count(1);
    cout<<cnt<<endl;

    ms.erase(1); //all 1 erased
    for(auto i: ms){
        cout<<i<<" ";
    }cout<<endl;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    //only  a single one erased
    ms.erase(ms.find(1));
    for(auto i: ms){
        cout<<i<<" ";
    }cout<<endl;

    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    auto it = ms.find(1);
    ms.erase(ms.find(1), next(ms.find(1),2));//+ is not defined for multiset iterator 
    
    //rest all is same 
    for(auto i: ms){
        cout<<i<<" ";
    }cout<<endl;

}

int main()
{
    explainMultiSet();
    return 0;
}