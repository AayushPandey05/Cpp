//*TODO:.understanding "Global" and "local" variable....
/*This code will be executed based on priorities and due to that the function in  
scope will be executed first then outer and then Global variable will be executed*/
#include<iostream>
using namespace std;
int x = 5;  //!..It is a global variable..{Executed if both "local" and "outer" not present}..
int main() 
{
    int x = 10; //!..It is a outer variable...{Executed if local is not present}..
    {
    int x = 20;  //!..It is a local variable...{Executed first}..
    cout<<x<<"\n";
    return 0;
    }
   
}