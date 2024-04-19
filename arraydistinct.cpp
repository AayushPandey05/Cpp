//TODO:...TO COUNT THE DISTINCT ELEMENT IN ARRAY...
#include<iostream>
using namespace std;

//!..Declaring arr[] and int n in int .....
int count_distinct(int arr[],int n){

int count = 0; //!...Count start fromm 0...
bool isdistinct = true;  //?...DEFAULT....

//!..checkin the cases using loops....
    for (int i = 0; i < n; i++) {
      isdistinct = true;
//!..This execute only if "i" is false....
    for(int j = i-1; j >= 0; j--) {
       if(arr[i] == arr[j]) {
           isdistinct = false;
             break;
    }
}
    if(isdistinct == true) 
      count++;
}
  return count;
}
//..MAIN FUNCTION...
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<count_distinct(arr,n);
    return 0;
}