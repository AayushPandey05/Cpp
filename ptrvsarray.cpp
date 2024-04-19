#include<iostream>
using namespace std;
int main() {
    int arr[] = {10,20,30};
    int *p1 = arr;
    int (*p2)[3] = &arr;
    cout<<*p1<<endl;
    cout<<**p2<<endl;
    return 0;
}

//!NOTE:- 1> **p2[3] means an array of pointers of size 3.
//!       2> p1 and **p2 both holding the first element addres/value.