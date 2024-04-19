//TODO:..Example of infinite while loop...
#include<iostream>
using namespace std;
int main()
{
    ///....exampe 1...
    int i=0;
    while(true){
        cout<<"Hello\n";
        i++;
    }
    ///.....exampe 2...
    int a=0;
    while(1){ //!Here 1 is treated as true as it is an bool value....
        cout<<"byee\n";
        a++;
    }
    int b=0;
    while(b<5);//!Here this ";"treated as single statement,so every time the condition is true in this case..
    {          //!..NO OUTPUT...
        cout<<"XYZ\n";
        b++;
    }
    return 0;
}