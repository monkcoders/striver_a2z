#include <bits/stdc++.h>
using namespace std;


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


int main()
{

    explainQueue();

    return 0;
}