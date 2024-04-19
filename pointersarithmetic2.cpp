//!..EXAMPLES OF PREFIX AND POSFIX........
#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40};
    int *ptr = arr;
    cout << *ptr << " " << ptr <<"\n";
    ptr++;
    cout << *ptr << " " << ptr <<"\n";
    ptr--;
    cout << *ptr << " " << ptr <<"\n";
    return 0;
}
//!..OUTPUT.......
    10 0x61fefc
    20 0x61ff00
    10 0x61fefc