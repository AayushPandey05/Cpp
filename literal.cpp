//*TODO: USING PREFIXES IN INTEGER LITERAL.....
#include<iostream>
using namespace std;
int main()
{
    int a = 20;
    int b = 0X1A; //! it is hexadecimal...[0 to 9]&[A to F]i.e[10 to 15]..
    int c = 016;  //! it is octal...[0 to 7] is only allowed..
    int d = 0b11; //! it is binary...[0 & 1]..
    cout<< a <<"\n"<< b <<"\n"<< c <<"\n"<< d;
    return 0;
}