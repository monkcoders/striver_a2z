#include <bits/stdc++.h>
using namespace std;

//stores everything in sorted oerde3r and everything is unique
//implemented using tree
//sorted and unique
//in set every operation is in O(logn) i.e insert, delete, search
void explainSet(){
    set<int> st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}//does not insert 2 as set contains only unique values
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}
    
    //functionality of insert in vector can be used aslo
    //that only increases efficiency'
    //begin(), end(), rbegin(), rend(), size(),empty(), swap()
    //are same

    //{1,2,3,4}
    auto it1 = st.find(3);//return iterator to element 3 in set st

    auto it2 = st.find(6);//returns iterator to st.end() if elemet not present 

    st.erase(1);
    //{2,3,4}
    int cnt = st.count(1); //returns count of value 
    //as set contains unique values henece it is either 0 if not present else 1
    cout<<cnt<<" "<<st.count(2)<<endl;

    auto it3 = st.find(3);
    st.erase(it3);//{2,4}

    st.insert(1);
    st.insert(4);
    st.insert(5);

     //lower_bound() and upper_bound() are same as vector
    auto it6 = st.lower_bound(2);
    auto it7 = st.upper_bound(3);
    cout<<*it6<<" "<<*it7<<endl;

    auto it4 = st.find(2);
    auto it5 = st.find(4);
    //{1,2,3,4,5}
    st.erase(it4,it5);//erase elements between 2 to 4 except 4
    //{1,4,5}

   


}

int main()
{


    explainSet();
    return 0;
}