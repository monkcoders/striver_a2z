#include<bits/stdc++.h>
using namespace std;
/*
Take the day no and print the corresponding day
for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/
int main(){
    int dayNo;
    cin>>dayNo;
    switch(dayNo){
        case 1: cout<<"Monday\n"; break;
        case 2: cout<<"Tuesday\n"; break;
        case 3: cout<<"Wednesday\n"; break;
        case 4: cout<<"Thursday\n"; break;
        case 5: cout<<"Friday\n";break;
        case 6: cout<<"Saturday\n";break;
        case 7: cout<<"Sunday\n";break;
        default: cout<<"Incorrect input";break;
    }
    return 0;
}