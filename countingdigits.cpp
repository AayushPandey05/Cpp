//TODO:..Counting digits in a given number...
#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"Enter N: ";
    cin>>n;
    while(n>0) {
        n=n/10;
        count ++;
    }
    cout<<count;
}