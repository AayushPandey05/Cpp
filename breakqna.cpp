//Todo:..Guess the Output...
#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=5){
        if(i==3)
          break;
        cout<<i<<" ";
        i++;
    }
    cout<<i<<" ";
    return 0;
}