#include<iostream>
using namespace std;
int main()
{
//!...Left shift(<<)...
    int x=3;
    cout<<(x<<1)<<"\n";/*x:0000...000011
                       x<<1:0000...000110*/
    cout<<(x<<2)<<"\n"; //? x<<2: 0000...001100
    int y=4;
    int z=(x<<y);//?  x<<4: 0000...110000
    cout<<z<<"\n";
//!...Right shift(>>)...
    int a=33;          
    cout<<(a>>1)<<"\n";    /*x:0000...100001
                           x>>1:0000...010000*/ 
    cout<<(a>>2)<<"\n"; //?  0000...001000
    int b=4;
    int c=(b>>a); //?  0000...000010
    cout<<c<<"\n";
//!...Bitwise Not(~).[UNSIGNED]...
    unsigned int d=1;
    cout<<(~d)<<endl; //? 4294967294
    d=5;
    cout<<(~d)<<endl; //? 4294967290
//!..Bitwise Not(~).[SIGNED]...
    int e=1;
    cout<<(~e)<<endl; //? -2
    e=5;         //!..[-2^31 to 2^31-1]...
    cout<<(~e)<<"\n"; //?-6
    return 0;
}