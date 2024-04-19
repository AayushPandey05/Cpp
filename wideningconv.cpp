//*TODO:Type conversion or Windening converions or Implicit conversion...
#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    float x = 10.5;
    int y = x;
    bool z = y;
    cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
    cout<<typeid(x).name()<<"\n";
    cout<<typeid(y).name()<<"\n";
    cout<<typeid(z).name();
    return 0;
}