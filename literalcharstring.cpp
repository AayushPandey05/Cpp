//TODO: USING CHAR AND STRING IN LITERAL.....
//If there is no prefix then the output value will be stored in the ASCII ....
//!.Prefixes:1.[U8:UTF-8],2.[U:UTF-16],3.[U:UTF-32],4.[L:Wchar_t]
#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    char c ='g';
    const char * s1 = "gfg";
    string s2 = "courses";
    cout<<c<<"\n"<<s1<<"\n"<<s2;
    cout<<typeid(c).name()<<" "<<"\n";
    cout<<typeid(s1).name()<<" "<<"\n";
    cout<<typeid(s2).name()<<;
    return 0;
}