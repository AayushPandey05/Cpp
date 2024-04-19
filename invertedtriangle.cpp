//TODO: print inverted triangle pattern........
#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter n: ";
    cin >> n;

    while(i<=n){
        int j=1;
        //.for spaces...
        while(j <= n-i){
            cout<<" ";
            j++;
        }
        //..For STARS....
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
}