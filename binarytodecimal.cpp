//TODO:: Binary to decimal........
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Binary NO: ";
    cin>>n;
//!..taking val as ans..
    int ans = 0;
//.Storing user input in temp...
    int temp = n;
//!..Making base value 1..
    int base = 1;
//!..Putting Loop..
    while(temp > 0){
        int last_digit=temp%10;
        ans += (last_digit*base);
        base=base*2;
        temp=temp/10; 
    }
    cout<<ans;
}