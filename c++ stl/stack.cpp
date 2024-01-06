#include <bits/stdc++.h>
using namespace std;


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

int main()
{

    explainStack();

    return 0;
}