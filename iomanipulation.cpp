//*TODO-1:..IOMANIPULTION USING DIFF FUNCTIONS.....
#include<iostream>
using namespace std;
int main()
{
    bool b = true;
    cout<<b<<endl;
    cout<<boolalpha; //!..it is used just to print bool value in form of [True or False].....
    cout<<b<<endl;
    int a = 26, c = 20;
    cout<<a<<" "<<c<<"\n";
    cout<<hex; //!..it is used just to print hex values..
    cout<<a<<" "<<c<<"\n";
    cout<<oct; //!..it is used just to print oct values..
    cout<<a<<" "<<c<<"\n";
    cout<<dec; //!..it is used just to print dec values..
    cout<<a<<" "<<c<<"\n";
//*TODO-2:..[showbase],[showpos],[Uppercase]or[noshowbase],[noshowpos],[nouppercase].........    
    cout<<showbase; //?..To show the base i.e{for hex,oct and dec}
    cout<<oct;
    cout<<a<<"\n"; //!..it is used just to print oct values i.e[o]
    cout<<hex;  //!..it is used just to print hex value i.e[ox]
    cout<<a<<"\n";
    cout<<showpos; //?.it puts positive sign before a positive number...
    cout<<a<<"\n";
    cout<<uppercase; //?..To show the uppercase the character x and a are in uppercase letter..
    cout<<a;
    return 0;
 
}