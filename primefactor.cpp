//*TODO:..Finding prime factors of numbers....
#include<iostream>
using namespace std;
int isprime(int n){      //!..Using for loop from 1 to n numbers which is dividing N..
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
 void prime_factor(int n){
    for(int i =2; i<n; i++){
        if(isprime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x=x*i;;
            }
        }
    }
 }
 int main(){
    int n;
    cin>>n;
    prime_factor(n);
    return 0;
 }

