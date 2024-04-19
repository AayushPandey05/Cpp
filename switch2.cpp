#include<iostream>
using namespace std;
int main()
{
    int x=0 , y=0 ;
    cout<<"Enter your choice\n";
    char move;
    cin>>move;
    
    if (move=='L')
          x--;
    else if (move=='R')
          x++;
    else if (move=='U')
          y++;
    else if (move=='D')
          y--;
    else
      cout<<"Invalid choice\n";
    
    cout <<x<<" "<<y<<endl;
    return 0;
}