//TODO:..Finding the factorial of any number...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans=1;
    while(n>0){
        ans=ans*n;
        n--;
    }
    cout<<"Factorial is: "<<ans;
    return 0;
}