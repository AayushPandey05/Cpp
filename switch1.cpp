//TODO:..Switching In C++ 1ST....
#include<iostream>
using namespace std;
int main()
{
    int x=0;
    cout<<"Enter your choice\n";
    char move;
    cin>>move;
    switch(move)
    {
    //!..Moves?...    
        case 'L':x--;
               break;
        case 'R':x++;
               break;
        case 'U':y++;
               break;
        case 'D':y--;
               break;
    default:cout<<"Invalid move\n"; /*.If every case is invalid this this.*/
    }
    cout<<x<<" "<<y<<endl;
    return 0;
}