//*TODO:SWAPING NUMBERS  AND STRING BETWEEN TWO VARIABLES....
 #include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b =20;

    cout<<a<<" "<<b<<endl;
    
    int temp = a;//!temp is used to store the value of a tempory so that b didnt get its value same as a..
    a = b;
    b = temp;

    cout<<a<<" "<<b<<"\n";
   
    string c = "Hello";
    string d = "Bye";

    cout<<c<<" "<<d<<endl;
    
    string temp1 = c;
    c = d;
    d = temp1;
    
    cout<<c<<" "<<d;

    return 0;
}