//TODO:..Function Parameter & Reference...
#include<iostream>
using namespace std;
//!..Without reference...
void fun(int x) {  //...X1..
    x = x+5;
}               //!.in this both x1 and x2 is different becuse of diff memory, label location..
int main() {
    int x = 10;  //...X2...
    fun(x);
    cout << x;   //..This is x2...
    return 0;
}

//!..With reference...
void fun(int &x) {   //...X1..
    x = x+5;
}               //!.in this both x1 and x2 is same becuse of same memory, label location after reference..
int main() {
    int x = 10;  //...X2...
    fun(x);
    cout<<x; 
    return 0;
}