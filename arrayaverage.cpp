//TODO:....Sum of all the element in an Array.....
#include<iostream>
using namespace std;

//!..Declaring arr[] and int n in int .....
double average(int arr[],int n) {

    int sum = 0;  //---DAFAULT THE ANS WILL BE O----
    for(int i=0; i<n; i++) {
        sum += arr[i];
    }
    return sum/double(n);
}
//------MAIN FUNCTION------
int main() {
    int n;
    cin >>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    cout<<average(arr,n);
    return 0;
}