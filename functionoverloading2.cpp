#include<iostream>
using namespace std;
void print(string s)
{
    cout<<s<<"\n";
}
void print(int x)
{
    cout<<x<<"\n";
}
void print(char c)
{
    cout<<c<<"\n";
}
int main()
{
    print(10);
    print("Hello");
    print('a');
}