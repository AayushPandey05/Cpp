#include<iostream>
using namespace std;
int countValues (int n)
{
   int countv=0;
   for(int i=0; i<=n; i++ )
       if((n+i)==(n^i))
       countv++;
   return countv;
}
int main(){
    int n;
    cin >> n;
    cout<<countValues(n);
    return 0;
}