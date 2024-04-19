//TODO:..FIBONACCI NUMBER...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a;
    int b;
    int c=0;
    cout<<"0 1 ";
    for(int i=0; i<n; i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}