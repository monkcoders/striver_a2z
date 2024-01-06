#include <bits/stdc++.h>
using namespace std;

//it is same as doubly linked list 
//doubly ended queue is called deque
//all operations are O(1)
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

int main()
{


    explainDeque();

    return 0;
}