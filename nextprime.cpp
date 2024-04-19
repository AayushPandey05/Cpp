//TODO:..Finding the prime number next prime number n...
#include<iostream>
using namespace std;
int nextprime(int n){
    n++;
    while(true){
        int i;
        for(i=2; i<n; i++){
            if(n%i==0)
            break;
        }
        if(i==n)
        return n;
        n++;
    }
}
int main(){
    int n;
    cin >> n;
    cout<<nextprime(n);
    return 0;
}