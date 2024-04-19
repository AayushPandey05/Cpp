//TODO:....Sum of all the element in an Array.....
#include<iostream>
using namespace std;

//!..Declaring arr[] and int n in int .....
int add(int arr[],int n) {

    int ans = 0;  //---DAFAULT THE ANS WILL BE O----
    for(int i=0; i<n; i++) {
        ans += arr[i];
    }
    return ans;
}
//------MAIN FUNCTION------
int main() {
    int n;
    cin >>n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int sum = add(arr,n);
    cout<<sum<<endl;
    
    return 0;
}