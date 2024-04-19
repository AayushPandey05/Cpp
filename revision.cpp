#include<iostream>
using namespace std;

bool check_if_sorted(int arr[], int n){
    for(int i=1; i<n; i++) {
        if(arr[i] < arr[i-1])
           return false;
    }
    return true;
}
int main() {
    int  n;
    cin>>n;
    int arr[n];
//!...loop..
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    if(!check_if_sorted(arr, n)==false)
       cout<<"Not Sorted";
    else
       cout<<"Sorted";
    return 0;
}

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int temp = n;
    int base = 1;
    while (temp>0) {
        int last_digit = temp % 10;
        ans += (last_digit * base);
        base = base*2;
        temp = temp/10;
    }
    cout<<ans<<endl;
}