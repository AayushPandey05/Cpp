//TODO:..Nested Loop...
//?..Print the table of firnt n positive number........
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    for(int x=1; x<=n; x++){  //!..loop will run fron 1 to n.....
        for(int i=1; i<=10; i++){  //!..loop will run fron 1 to 10.....
            cout<<(x*i)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}