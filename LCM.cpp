//TODO:..LCM of two numbers...
#include<iostream>
using namespace std;
int main (){
//!..INPUT...    
    int a, b;
    cin>>a;
    cin>>b;
//!..RANGE...
    int start=max(a,b);
    int end=(a*b);
//!..FORLOOP...
    for(int i=start; i<=end; i++){
    //!...CONDITION....
        if(i%a==0 and i%b==0){
           cout<<"LCM IS: "<<i<<endl;
           break;
        } 
    }
    return 0;
}