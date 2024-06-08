//!..Sorting Array using simple STL...
#include<algorithm>
#include<iostream>
using namespace std;
int main() {
    int n;   //!..Size of array...
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
//!..Sorting ALGORITHM....  
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}