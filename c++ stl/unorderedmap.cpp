#include <bits/stdc++.h>
using namespace std;

void explainUnorderdMap(){
    //it is same as the normal map omly difference is that
    //unorderd map contains element in randomized order 
    // keys are unique no duplicate keys allowed 
    // most cases time complexity is O(1)
    //worst case O(n)
    unordered_map<int,int> mymap;
    mymap[1]=2;
    cout<<mymap[1]<<endl;
    //everything is same
}


int main()
{

    
    explainUnorderdMap();

    return 0;
}