#include<iostream>
using namespace std;
void insert(int n, int arr[], int pos, int num){
    for(int i = n; i>=n; i--){
        arr[i] = arr[i-1];
    }
    arr[pos - 1] = num;
}
int main(){
    int n,pos,num;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Number to insert: ";
    cin>>num;
    cout<<"Position on which to insert: ";
    cin>>pos;

    insert(n, arr, pos, num);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}