//!..EXAMPLE OF +/- ......
#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30,40};
    int *ptr = arr;
    cout << *ptr <<" "<< ptr << "\n";
    ptr = ptr + 3;
    cout << *ptr <<" "<< ptr << "\n";
    ptr = ptr - 2;
    cout << *ptr <<" "<< ptr << "\n";
    return 0;
}
//!..OUTOUT...
    10 0x61fefc
    40 0x61ff08
    20 0x61ff00