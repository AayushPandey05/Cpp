#include <iostream>
using namespace std;
int main()
{
//!..&& operator....    
    int x=5;
    bool res=(x>10)&&(x++);
    cout<<res<<"\n";
    cout<<x;
//!..or operator..
    int x=5;
    bool res=(x==4)or(x++);
    cout<<res<<"\n";
    cout<<x;
//////////////////////////////
    int x=5;
    bool res=(x==4)or(x++);
    cout<<res<<"\n";
    cout<<x;
    return 0;

}