//Todo:.Print N row and N colum pattern........
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    for(int i=0; i<n; i++) {   //!.It will print Vertical pattern
        for(int j=0; j<n; j++) { //!.It will print Horizontal pattern
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}