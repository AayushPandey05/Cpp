#include<iostream>
using namespace std;
int main(){
    int target;
    cout<<"Target: ";
    cin>>target;
    int num,num1,num2,num3;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(num=arr[0]+arr[1]== target || num1=arr[0]+arr[2]== target || num2=arr[0]+arr[3]==target || num3=arr[0]+arr[4]== target){
        cout<<arr[n]<<endl;
    }
    else if(arr[1]+arr[0]== target || arr[1]+arr[2]== target || arr[1]+arr[3]== target || arr[1]+arr[4]== target){
        cout<<arr[n]<<endl;
    }
    else if(arr[2]+arr[0]== target || arr[2]+arr[1]== target || arr[2]+arr[3]== target || arr[2]+arr[4]== target){
        cout<<arr[n]<<endl;
    }
    else if(arr[3]+arr[0]== target || arr[3]+arr[1]== target || arr[1]+arr[2]== target || arr[3]+arr[4]== target){
        cout<<arr[n]<<endl;
    }
    else if(arr[4]+arr[0]== target || arr[4]+arr[1]== target || arr[4]+arr[2]== target || arr[4]+arr[3]== target){
        cout<<arr[n]<<endl;
    }
    else{
        cout<<"FORBIDDEN 404";
    }
    return 0;

}