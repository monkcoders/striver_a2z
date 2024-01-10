#include <bits/stdc++.h>
using namespace std;

void explainMultiMap(){
    //it is similar to map only difference is that it can store same key multiple times 
    //it can store duplicate keys 
    //the sorted order is maintained
    multimap<int,int> mmp;
    mmp.insert(make_pair<int,int>(1,12));
    mmp.insert({1,34});
    mmp.emplace(2,3);
    for(auto it: mmp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //alll other functions are same
}



int main()
{

    
    explainMultiMap();

    return 0;
}