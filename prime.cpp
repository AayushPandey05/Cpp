//TODO:..Checking if the number is prime or not..
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
//!.1st checking for neither prime nor composit...
    if(n==0 || n==1){
        cout<<"Neither Prime Nor Composite";
        return 0;
    }
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"No";
            return 0;
        }
        i++;
    }
    cout<<"yes"<<endl;
    return 0;
}