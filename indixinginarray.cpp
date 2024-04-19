//TODO:..HOW DOES INDIXING WORK?...
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    cout<<arr<<"\n";   //!..Print the address of first element (in this case it is "0x61ff00")..
    cout<<arr[2];  //!..Print element at address(in this case 3 will be printed)
// // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // //   
//.NOTE:["PLEASE COMMENT THE ABOVE PROGRAME BEFORE RUNNIG THE BELOW CODE"].....
// // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // // //
//?...IN C++ COMPILER COMPIER THE ARR EVEN IF THE INITIALIZATION IS NOT PROVIDES...*/
    int arr[]={10,20,30,40};
    cout<<arr[2]; //!!..Here compiler will give any value as output...
    return 0;
}
//!..NOTE: arr + 2*signof(int)...i.e 3