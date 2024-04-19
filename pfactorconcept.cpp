#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool is_prime = true;
    for(int i=2; i*i<=n; ++i){
        if(n%i==0){
            is_prime = false; 
            break;
        }
    }
    /*0(n)*/
    cout<<is_prime<<endl;
}
