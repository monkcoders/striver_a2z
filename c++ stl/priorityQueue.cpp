#include <bits/stdc++.h>
using namespace std;



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

    cout<<pq.top();//return 8
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

int main()
{

    explainPQ();
    return 0;
}