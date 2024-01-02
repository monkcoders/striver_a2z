#include<bits/stdc++.h>
using namespace std;
/*
functions are set of code which performs something for you 
functions are used to modularise coee functions are used to increase readability 
functions are used to reuse same code multiple times 
void -> does not return anything 


*/
void printName(){
    cout<<"Hey abhishek\n";
}

void printNameP(string name){
    cout<<"Hey "<<name<<"\n";
}

int sum(int num1, int num2){
    int num3 = num1+num2;
    return num3;
}

int maxx(int num1, int num2){
    if(num1>=num2){
        return num1;
    }
    //if nothing is returned then on calling this function will return random value
    return num2;

}
//pass by value works on the copy of passed value 
void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;

}
//pass by reference
//arrays are always passed by reference 
void doSomethingReference(string &s){
    s[0] = 't';
    cout<<s<<endl;
}
int main(){
    string name;
    cin>>name;
    printName();
    printNameP(name);
    printNameP("Anushka");
    int num1, num2;
    cin>>num1>>num2;
    int num3 = sum(num1,num2);
    cout<<num3<<endl;
    cout<<maxx(num1,num2);
    int num;
    cin>>num;
    cout<<num<<endl;
    doSomething(num);
    cout<<num<<endl;
    string st = "hello";
    cout<<st<<endl;
    doSomethingReference(st);
    cout<<st<<endl;
    return 0;
}