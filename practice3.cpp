#include<iostream>
using namespace std;
void fun(int x)
{
    if(x == 0)  //!..It is base recursion...
      return; 
    else
    {
      cout<<"Going Good\n";
    fun(x-1);
    }
}
int main()
{
    fun(3);
    return 0;
}