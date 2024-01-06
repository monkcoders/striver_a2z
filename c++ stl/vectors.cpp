#include <bits/stdc++.h>
using namespace std;



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

int main()
{

    explainVector();

    return 0;
}