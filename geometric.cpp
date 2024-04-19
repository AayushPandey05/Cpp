#include<iostream>
#include<math.h>
using namespace std;
int  main()
{
    //First Number
    int a;
    cin>>a;
    //common ratio
    int r;
    cin>>r;
    //Nth 
    int n;
    cin>>n;

    int ans = a * (int) pow(r, n - 1);
    cout<<ans;
    return 0;
}