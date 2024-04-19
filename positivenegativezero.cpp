//Todo:..PositiveNegativeZero....
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n>0) //Condition 1..
        cout<<"positive";
    else if (n<0) //condition 2 //!.Execute only if condition 1 is false..
        cout<<"negative"; 
    else 
        cout<<"Zero"; //!..Execute only if condition 1&2 are false...
    return 0;
}