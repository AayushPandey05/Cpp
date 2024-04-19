//TODO:..DOWhileLoop...
#include<iostream>
using namespace std;
int main(){
    //..EXAMPLE-1...
    int n;
    cin>>n;
    int i=0;
    do{
        cout<<"Hello\n";
        i++;
    }
    while(i<3);
    //EXAMPLE-2...
    int a=3;
    do{
        cout<<"Hello\n";
        a++;
    }
    while(a<3);
    return 0;
}
//!It shows the first output even after the first condition is false */