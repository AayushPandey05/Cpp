//TODO:,Finding the last digit of any number....
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    
    int ans = abs(x)%10; /*using this[%] because any number divided by 10 will give last
                             digit as result. And Using ABS will convert any negative number to positive
                             and any positive number will remain same.*/
    cout << ans;
    return 0;
}