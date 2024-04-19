//TODO:..Practice Question of Referecne...
#include<iostream>
using namespace std;
//-------QUESTION-1----------------------------------
int main(){
    int x = 10, y = 20;
    int &z=x;  //!.Since z is geting ref of x mens value of z = x i.e z=10 therefor x = 20....
    z=y;   //!..Here z will get the value of y i.e. 20..
    z += 5;
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<z<<"\n";
    return 0;
}

//-------QUESTION-2----------------------------------
int &fun(){
    static int x = 10;
    return x; 
}
int main(){
    int &y=fun();
    y=20;
    cout<<fun();
    return 0;
}

//-------QUESTION-3----------------------------------
int main(){
    string s1="MY ",s2="World";
    string &&s3=s1+s2;
    s3="Welcome to "+s3;
    cout<<s3<<"\n";
    return 0;
}