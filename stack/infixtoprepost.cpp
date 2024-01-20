#include<bits/stdc++.h>
using namespace std;

unordered_map<char,pair<int,int>> priority;

void setPriority(){
    //higher value of first value of pair means higher priority 
    //second value of pair shows associativity -1 right to left +1 left to right
    //pair first = priority second = associativity 
    priority['+'] ={1,1};
    priority['-'] ={1,1};
    priority['*'] = {2,1};
    priority['/'] = {2,1};
    priority['%'] = {2,1};
    priority['^'] = {3,-1};


    cout<<"All priorities are set "<<endl;
    for(auto it: priority){
        cout<<"Operator "<<it.first<< " priority "<<it.second.first<<" associativity "<<it.second.second<<endl;
    }




} 

string to_postfix(string s){
    stack<char> myOperator;
    string ans =""; 
    for(int i =0; i<s.length(); i++ ){
        if((s[i] >='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')){
            ans = ans+s[i];
        }else if(priority.count(s[i]) || s[i]=='(' || s[i]==')'){
            
            if(myOperator.empty()){
                myOperator.push(s[i]);
                
            }else if(s[i]==')'){
                while(myOperator.top()!='('){
                    ans+=myOperator.top();
                    myOperator.pop();
                }
                myOperator.pop();
            }
            else if(s[i]=='('){
                myOperator.push(s[i]);

            }
            else if(priority[myOperator.top()].first > priority[s[i]].first){
                while(!myOperator.empty() && priority[myOperator.top()].first>priority[s[i]].first){
                    ans = ans+myOperator.top();
                    myOperator.pop();
                }
                myOperator.push(s[i]);
                
            }
            else if(priority[myOperator.top()].first < priority[s[i]].first){
                myOperator.push(s[i]);
            }else {
                if(priority[s[i]].second==1){
                    ans = ans+myOperator.top();
                    myOperator.pop();
                    myOperator.push(s[i]);
                }else{
                    myOperator.push(s[i]);
                }
            }
        }else{
            cout<<"Invalid expression";
            return "-1";
        }
    }
    while(!myOperator.empty()){
        ans+= myOperator.top();
        myOperator.pop();
    }
    return ans;
}

string to_prefix(string s){
    stack<char> myOperator;
    string ans =""; 
    reverse(s.begin(), s.end());
    cout<<s<<endl;
    for(int i =0; i<s.length(); i++ ){
        if((s[i] >='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')){
            ans = ans+s[i];
        }else if(priority.count(s[i]) || s[i]=='(' || s[i]==')'){
            
            if(myOperator.empty()){
                myOperator.push(s[i]);
                
            }else if(s[i]=='('){
                while(myOperator.top()!=')'){
                    ans+=myOperator.top();
                    myOperator.pop();
                }
                myOperator.pop();
            }
            else if(s[i]==')'){
                myOperator.push(s[i]);

            }
            else if(priority[myOperator.top()].first > priority[s[i]].first){
                while(!myOperator.empty() && priority[myOperator.top()].first>priority[s[i]].first){
                    ans = ans+myOperator.top();
                    myOperator.pop();
                }
                myOperator.push(s[i]);
                
            }
            else if(priority[myOperator.top()].first < priority[s[i]].first){
                myOperator.push(s[i]);
            }else {
                if(priority[s[i]].second==-1){
                    ans = ans+myOperator.top();
                    myOperator.pop();
                    myOperator.push(s[i]);
                }else{
                    myOperator.push(s[i]);
                }
            }
        }else{
            cout<<"Invalid expression";
            return "-1";
        }
    }
    while(!myOperator.empty()){
        ans+= myOperator.top();
        myOperator.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


int main(){
    string s;
    cin>>s;
    setPriority();
    cout<<endl;
    cout<<s<<endl;
    string post = to_postfix(s);
    cout<<post<<endl;
    string pre = to_prefix(s);
    cout<<pre<<endl;
    return 0;
} 