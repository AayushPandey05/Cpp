#include<iostream>
using namespace std;
//!..Function to reverse the digits of two numbers.....

void reverse_dig(int &a, int &b){
    int rev_a=0; //*..Variable to store the reverse of a..*/
    while(a>0){
        rev_a = rev_a*10 + a%10; //*---Reversing the digit of a ----
        a = a/10;  //*--Removing the last digit of a ----
    }
    a = rev_a; //!..assigning the reversed value of a back to a......
    
    int rev_b=0;  //*..Variable to store the reverse of b..*/
    while(b>0){
        rev_b = rev_b*10 + b%10;  //*---Reversing the digit of a ----
        b = b/10;  //*--Removing the last digit of a ----       
    }
    b = rev_b;   //!..assigning the reversed value of a back to a......
}
//!..Function to swap the value of two variables a and b...
void swap(int &a, int &b){
    int c;
    c=a;
    a=b;
    b=c;
}
//!@..Main Function....
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        reverse_dig(a, b);
        swap(a, b);
        cout<<a<<" "<<b;
    }
    return 0;
}