#include <bits/stdc++.h>
using namespace std;




//its used to store data in a key value pairs 
//all the keys are unique and are stored in a sorted order of keys 
void explainMap(){
    map<int,int> mp;
    mp[1]= 2;
    mp.insert({3,5});
    mp.emplace(2,4);
    mp[5]=12;

    for(auto ele : mp  ){
        cout<<ele.first<<" "<<ele.second<<endl;
    }

    cout<<mp[1]<<" "<<mp[3]<<endl;
    
    auto it = mp.find(1);
    cout<<it->second<<endl;//arrow operator is used to dereference pointer to an object or structure and access its members
    //avoid using *(it).second
    mp.erase(5);

    //if element not present then find returns end() iterator to map
    if(mp.find(5)==mp.end()){
        cout<<"5 not there in map"<<endl;

    }else{
        cout<<mp.find(5)->second<<endl;//with an iterator always use arrow operator to access its members

    }

    //its also has lower_bound and upper_bound 
    //all other methods are same here 

    map<pair<int,int> , char> pairChar;
    pairChar[{1,3}] = 'a';
    pairChar.insert({{2,4}, 'b'});
    cout<<pairChar[{2,4}]<<endl;





int main()
{


    explainMap();
    return 0;
}