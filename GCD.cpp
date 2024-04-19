//TODO:.Finding the greatest common divisor of two number(GCD).....
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter values for a & b: ";
    cin >> a >> b;

    int x = min(a,b);
    int ans=1;
    for(int i=1; i<=x; i++){
        if(a%i==0 and b%i==0)
           ans = i;
    }
    cout<<"GCD is: "<<ans;
}
