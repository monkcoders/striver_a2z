#include <bits/stdc++.h>
using namespace std;


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

int main()
{

    // explainPair();
    // explainVector();
    explainList();


    return 0;
}