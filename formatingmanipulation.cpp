//TODO:..To use [SETW] and [SETFILL].....
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a = 12;
    cout<<setw(5); //!..to set the width..
    cout<<setfill('*'); //!..to fill the space if digit is less than set value of [setw]..
    cout<<a<<endl;
    cout<<left; //!..to put left align after printing....
    cout<<setw(5); 
    cout<<a;

}