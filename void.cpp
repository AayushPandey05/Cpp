#include<iostream>
using namespace std;
void fun()
{
    cout<<"Fun()called\n";
}
int main()
{
    cout<<"Before calling Fun()\n";
    fun();
    cout<<"After calling Fun()";
    return 0;
}