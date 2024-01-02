#include<bits/stdc++.h>
using namespace std;
/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
C. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - 8
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade.
*/
int main(){
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F\n";
    }
    else if(marks<45){
        cout<<"E\n";
    }
    else if(marks<50){
        cout<<"D\n";
    }
    else if(marks<60){
        cout<<"C\n";
    }
    else if(marks<80){
        cout<<"B\n";
    }
    else {
        cout<<"A\n";
    }
    return 0;
}
