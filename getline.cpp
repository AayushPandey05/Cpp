#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name"<<"\n";
    getline(cin, name);  //!..To print fullname in single line with a string
    cout<<"Welcome"<<" "<<name;
    return 0;
}