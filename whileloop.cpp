100//*TODO: Basic understanding of while loops....
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value for n: ";
    cin>>n;
    int i=0;
    while(i<n){
        cout<<"Hello\n";
        i=i+1;
    }
    cout<<"Bye\n";
    return 0;
}