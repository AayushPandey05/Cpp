//TODO:..Understanding Reference...
#include<iostream>
using namespace std;
int main() {
    int x = 10;
    int &y = x;   //!.Here we are referening y to x by using "&", so any change in y will change x..
    cout<<y<<" "<<endl;
    x = x+5;
    cout<<y<<" "<<endl;
    y = y+5;
    cout<<x<<" ";
    return 0;
}