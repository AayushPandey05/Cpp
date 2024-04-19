//! Given a number x, the task is to print the numbers from x to 0 in decreasing order in a single line.
// for example if x=5 thenoutput will be: 543210
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x: ";
    cin >> x;
    while(x>=0)
    {
        cout<<x<<" ";
        x -= 1;
    }
    return 0;
}
