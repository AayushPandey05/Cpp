//TODO:.Understanding Continue in c++ with example...
//?.print all number smaller than or equal to n that are not multiple of x....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    for(int i=0; i<=n; i++){
        if(i%x==0)
           continue;
           cout<<i<<" ";
    } 
    return 0;
}