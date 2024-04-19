//*Todo:C++ style Explicit conversion...
#include<iostream>
using namespace std;
int main()
{
    int x = 15 , y = 2;
    double z = static_cast<double>(x)/y; //!explicit conv...
    cout<<z;
    return 0;
}