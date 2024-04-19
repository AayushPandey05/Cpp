#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int y=x++; //!here first x will be stored in y and then x=x+1...
    int z=x++; //!here prefix is first so sub will take lace first i.e,z=9-1..
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<z;
}