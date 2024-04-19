//*TODO:...sizeof() in c++...
#include<iostream>
using namespace std;
int main()
{
//!..Every compilers have different values for each of the following functions mentioned below!.
    cout<<sizeof(int)<<"\n";
    cout<<sizeof(char)<<"\n";
    cout<<sizeof(long long)<<"\n";
    cout<<sizeof(float)<<"\n";
//*!..Now checking by taking variable x *//
    int x = 10;
    cout<<sizeof(x++);//*!.in this ['x++'] never hapens,only value of ['x'] will execute...*//
    cout<<x<<"\n";
//*!..Now checking by taking variable y and using double function........
    int y;
    double d; //*?returns a floating-point number corresponding to a number or a character string.
    cout<<sizeof(y)<<"\n";
    cout<<sizeof(d)<<"\n";
    cout<<sizeof(10ll)<<"\n";//!..here ["ll"] is long long...
    cout<<sizeof(10.5)<<"\n";
    return 0;
}