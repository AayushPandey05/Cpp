#include <iostream>
using namespace std;
int main()
{
    int x=10, y=20;
//!..3 way comparisio operator c++ 20...*/
/*..!it returns an object and its value is small than zero if first operant is small and equal to 
         if both operant is same and greater than zero if first operant is greater.....*/
    auto res= x <=> y;
    if (res<0)  
      cout<<"x is less"; //!.get this if x is smaller than y...
    else if(res>0)
      cout<<"x is more"; //!.get this if x is greater than y...
    else
      cout<<"x is some"; //!.get this if x and y are equal...
    return 0;

}