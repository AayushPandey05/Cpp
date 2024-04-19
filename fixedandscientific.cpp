//*TODO:..To do both fixed and scientific manip...
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
//!.....FIXED....
  double x=1.23, y= 1122456.453;
  cout<<std::fixed;
  cout<<x<<"\n";
  cout<<y<<"\n";
  cout<<std::setprecision(2);
  cout<<x<<"\n";
  cout<<y<<"\n";
  double z=1.2e+7;
  cout<<z<<"\n";
//!...SCIENTIFIC...
cout<<std::scientific;
cout<<x<<"\n";
cout<<y<<"\n";
cout<<std::setprecision(2);
cout<<x<<"\n";
cout<<y<<"\n";
double a=1.2e+7;
cout<<a<<"\n";

}