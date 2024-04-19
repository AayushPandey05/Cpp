//TODO:..Understanding the Const and R value Reference...
#include<iostream>
using namespace std;
//---------R-VALUE IN STRING-------------------
void fun(string &&s){
    s = "Hi "+s;
    cout<<s<<" ";
}
int main(){
    fun("Aayush");
    return 0;
}