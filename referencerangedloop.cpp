//TODO:..Ranged Based For Loop & Reference...
#include<iostream>
using namespace std;
//!..Without reference...
int main() {
    int arr[] = {10,20,30,40};
    for(int x : arr) {
        x=x*2;
    }

    for(int x: arr) {
         cout<<x<<" ";
    }
       return 0;
}

//!..With reference...
int main() {
    int arr[] = {10,20,30,40};
    for(int &x : arr) {
        x=x*2;
    }

    for(int x: arr) {
         cout<<x<<" ";
    }
       return 0;
}
//!...REFERENCE IN STRING......
int main() {
    string arr[] = {"AayushPandey","Billionair","Worlds_Best_Programmer"};
    for(const string &s : arr)  //?..we use "Const" to avoid unintentional changes to string...
    cout<<s<<" ";
    return 0;
}