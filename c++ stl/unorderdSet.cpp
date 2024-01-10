#include <bits/stdc++.h>
using namespace std;


//same as set but no order maintained
//stores unique values only, no duplicate allowed 
void explainUnorderedSet(){
    unordered_set<int> st;
    //lower_bound and upper_bound function does not works rest all functions are same
    //it does not store in any particular order 
    // its average time complexity is O(1)
    //but worst time complexity is O(n) when collisions happen but kit rarely occurs 

    st.insert(1);
    st.insert(1);
    st.insert(20);
    cout<<st.count(1)<<endl;

    
}

int main()
{

    explainUnorderedSet();

    return 0;
}