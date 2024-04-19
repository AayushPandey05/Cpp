//TODO:..Day before the N day...
#include <iostream>
using namespace std;
int main()
{
    /* 0 sunday      4 thrusday
       1 monday      5 friday
       2 tuesday     6 saturday
       3 wednesday
     */
    int d=0; //!..Current Day..
    int n=9;//!..No of Days..
                                   
    int x = n % 7;
    int ans = d - x; 

    if(ans > 0)
    cout<<ans;
    else
    cout<< ans + 7;
    
    return 0;
}