#include<iostream>
using namespace std;
int main()
{
    int x=10, y;
 //!..simpleoperator(so)...
    y=10; 
    cout<<y<<"\n";
    x+=10; 
    cout<<x<<"\n";
    x-=10;
    cout<<x<<"\n";
    x*=2; 
    cout<<x<<"\n";
    x/=2;
    cout<<x<<"\n";
//!..compound operators...
    x%=8;
    cout<<x<<"\n";
    x&=6;
    cout<<x<<"\n";
    x!=100;
    cout<<x<<"\n";
    x<=200;
    cout<<x<<"\n";
    x>=200;
    cout<<x<<"\n";
    x^=2;
    cout<<x;
    return 0;

}