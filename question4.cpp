#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
   for(int i=1; i<=s; i++){
        for(int j=1; j<=s; j++){
            if(s=1)
             cout<<" ";
            else
             cout<<"* ";
        }
        cout<<endl;
    }
}