#include<iostream>
using namespace std;
int main()
{
    //Firts Term
    int a;
    cin>>a;
    //common difference
    int d;
    cin>>d;
    //nth term 
    int n;
    cin>>n;

    int ans= a+(n-1)*d;
    cout<<"Nth term of this AP is: "<<ans;
    return 0;
}
