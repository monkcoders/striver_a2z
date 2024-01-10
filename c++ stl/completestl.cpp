#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first << " " << arr[0].second;
}

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    // vector of pairs
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // create a vector of size 5 with each element as 100
    vector<int> v1(5, 100);
    // vector of size 5
    vector<int> v2(5);

    // copy a vector into another
    vector<int> v3(v1);
    vector<int> myVec = {1, 2, 3, 4, 5, 6, 7, 8};
    // iterator to vector container
    vector<int>::iterator it = myVec.begin();
    cout << myVec[0] << " " << myVec[1] << endl;

    cout << *(it) << " " << *(it + 1) << endl;
    it = it + 3;
    cout << *it << endl;
    // points to end
    vector<int>::iterator it1 = v.end();
    // end of the reverse vector
    vector<int>::reverse_iterator it2 = v.rend();
    // begin of the reverse vector
    vector<int>::reverse_iterator it3 = v.rbegin();

    for (vector<int>::iterator it = myVec.begin(); it != myVec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // traverse the vector in reverse
    for (auto it = myVec.rbegin(); it != myVec.rend(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // for each loop
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;

    // myVec = {1,2,3,4,5,6,7,8}
    // address of the value to be deleted
    // {1,2,3,4,5,6,7,8}
    // deletes element at index 1 as begin()+1 points to index 1
    myVec.erase(myVec.begin() + 1);
    //{1,3,4,5,6,7,8}
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;

    // {1,3,4,5,6,7,8}
    myVec.erase(myVec.begin() + 2, myVec.begin() + 4);
    // {1,3,6,7,8}
    // [start,end)
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;

    // insertion at a given position/iterator using insert method
    //  {1,3,6,7,8}
    myVec.insert(myVec.begin() + 2, 12);
    // {1,3,12,6,7,8}inserts at index 2;
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;

    //  {1,3,12,6,7,8}
    // insesrts 34 2 times  at index 3
    myVec.insert(myVec.begin() + 3, 2, 34);
    //  {1,3,12,34,34,6,7,8}
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;

    // v1 ={100,100,100,100,100}
    // myVec ={1,3,12,34,34,6,7,8}
    myVec.insert(myVec.end() , v1.begin(), v1.end());
    // myVec ={1,3,12,34,34,6,7,8,100,100,100,100,100}
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;

    cout<<myVec.size()<<endl;//13
    myVec.pop_back();//removes last element
     // myVec ={1,3,12,34,34,6,7,8,100,100,100,100}
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;
 cout<<myVec.size()<<endl;//12
  v.swap(myVec);//swaps vector v with myvec
  for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    //removes everything from vector 
    myVec.clear();{}
    for (auto it : myVec)
    {
        cout << it << " ";
    }
    cout << endl;
    cout<<myVec.empty()<<endl;//returns true if empty else false




}

void explainList(){

    //list works as a doubly linked list
    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}

    ls.push_front(1);//{1,2,4}

    ls.emplace_front(3);//{3,1,2,4}

    cout<<ls.size()<<endl;
    for(list<int>::iterator it= ls.begin(); it!=ls.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;


    ls.pop_back();
    //{3,1,2}
    for(list<int>::iterator it= ls.begin(); it!=ls.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    ls.pop_front();
    //{1,2}
    for(list<int>::iterator it= ls.begin(); it!=ls.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    //rest all other funtions are same as vector
    //begin()., end(), rbegin(), rend(), clear(), insert(), size(), swap() 



}

void explainDeque(){

    //list works as a doubly linked list
    deque<int> dq;
    dq.push_back(2);//{2}
    dq.emplace_back(4);//{2,4}

    dq.push_front(1);//{1,2,4}

    dq.emplace_front(3);//{3,1,2,4}

    cout<<dq.size()<<endl;
    for(deque<int>::iterator it= dq.begin(); it!=dq.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;


    dq.pop_back();
    //{3,1,2}
    for(deque<int>::iterator it= dq.begin(); it!=dq.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    dq.pop_front();
    //{1,2}
    for(deque<int>::iterator it= dq.begin(); it!=dq.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    cout<<dq.front()<<" "<<dq.back()<<endl;
    //rest all other funtions are same as vector
    //begin()., end(), rbegin(), rend(), clear(), insert(), size(), swap() 



}

//lifo last in first out

void explainStack(){
    stack<int> st;
    st.push(1);//push at top of the stack 
    st.push(2);//at top 2
    st.push(3);//at top 3
    st.push(4);//top 4
    st.emplace(5);//top 5
    cout<<st.top()<<endl;//return top element that is 5
    // {1,2,3,4,5}
    //removes top element 
    st.pop();//{1,2,3,4}
    cout<<st.top()<<endl;//4

    cout<<st.size()<<endl;//size of stack 4
    cout<<st.empty()<<endl;//returns true if stack empty else false


    //swap st and st1 contents

    stack<int> st1;
    st1.swap(st);


    //all above operations are O(1)


    


}



//queue folows first in first out 
void explainQueue(){
    queue<int> q;
    q.push(1);//push at top of the stack 
    q.push(2);//at top 2
    q.push(3);//at top 3
    q.push(4);//top 4
    q.emplace(5);//top 5
    cout<<q.front()<<" "<<q.back()<<endl;//return frint 1 and back 5 elements 
    // {1,2,3,4,5}
    //removes front element 
    q.pop();//{2,3,4,5}
    cout<<q.front()<<" "<<q.back()<<endl;//4

    cout<<q.size()<<endl;//size of stack 4
    cout<<q.empty()<<endl;//returns true if stack empty else false


    //swap st and st1 contents

    queue<int> q1;
    q1.swap(q);


    //all above operations are O(1)
    cout<<q.front()<<endl;//returns random value as the q is empty 
}

//element with the highest priority stays at the top 
//lexographically largest is always at the top
//tree data structures is used to create a priority queue


void explainPQ(){

    //maximum priority queue maxheap
    priority_queue<int> pq;

    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}

    cout<<pq.top()<<endl;//returns highest element 10
//removes the greatest element
    pq.pop();
    //{8,5,2}

    cout<<pq.top()<<endl;//return 8
//minimun priorityqueue  minheap
    priority_queue<int,vector<int>, greater<int>> pq1;
    pq1.push(5);//{5}
    pq1.push(2);//{2,5}
    pq1.push(8);//{2,5,8}
    pq1.emplace(1);//{1,2,5,8}

    cout<<pq1.top()<<endl;//return 1
    //tc
    //push O(log(n))
    //pop O(log(n))
    //top O(1)

}
//stores everything in sorted oerde3r and everything is unique
//implemented using tree
//sorted and unique
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




}

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

    explainPair();
    explainVector();
    explainList();

    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainUnorderdMap();

    extraExplanation();

    return 0;
}