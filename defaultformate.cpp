#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<setprecision(4); //!to set a precision after a decimal...
    double x=15.5683,y=34267.1;
    cout<<x<<" "<<y<<"\n";
    double z=1.23;
    cout<<showpoint<<z<<"\n"; //!to add extra zero after the decimal number..
    cout<<showpos<<z<<"\n";
    cout<<uppercase<<y<<"\n";
    
}