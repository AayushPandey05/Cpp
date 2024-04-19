//Todo:...FIZZBUZZ..
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number: ";
    cin >> n;
    if(n%3!=0 && n%5!=0)
    {
        cout<<"FizzBuzz";
        if(n%3==0)
            cout<<"FizzYOO";
        else
            cout<<"FizzOOO";
    }    
    else if(n%3==0)
        cout<<"Fizz";
    else if(n%5==0)
        cout<<"Buzz";
    else
        cout<<"number";
}