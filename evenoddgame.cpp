//TODO:.Creating a game of Even Odd...
#include<iostream>
using namespace std;
int main()
{
 int a;
 cout<<"Choice a number\n";
 cin>>a;
 if(a%2==0)
     cout<<"Opponent Won";//!.If theire is even number then opponent will always win..
 else
     cout<<"You Won"; //!.If theire is odd number then only you will win...
 return 0;
}